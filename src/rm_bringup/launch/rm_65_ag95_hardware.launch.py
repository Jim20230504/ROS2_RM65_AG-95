import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
import xacro

def generate_launch_description():
    # === 1. 参数声明 ===
    # 机械臂 IP 地址 (默认 192.168.1.18)
    arm_ip_arg = DeclareLaunchArgument(
        'arm_ip', default_value='192.168.1.18',
        description='IP address of the RM65 robot arm'
    )
    # 夹爪串口号 (默认 /dev/ttyUSB0)
    gripper_port_arg = DeclareLaunchArgument(
        'gripper_port', default_value='/dev/ttyUSB0',
        description='Serial port for AG95 gripper'
    )

    # === 2. 加载组合 URDF 模型 ===
    # 使用我们在第一部分创建的 rm_65_with_ag95.urdf.xacro
    rm_description_path = get_package_share_directory('rm_description')
    xacro_file = os.path.join(rm_description_path, 'urdf', 'rm_65_with_ag95.urdf.xacro')
    
    doc = xacro.process_file(xacro_file)
    robot_description_config = doc.toxml()

    # === 3. 节点定义 ===

    # A. Robot State Publisher (负责发布 TF 坐标变换)
    # 它会接收来自机械臂和夹爪的 /joint_states，并计算出所有连杆的位置
    node_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description_config}]
    )

    # B. RM65 机械臂驱动
    # 直接调用 rm_driver 包中的节点
    # 注意：根据睿尔曼官方包结构，rm_driver 节点通常接受参数文件
    rm_driver_config = os.path.join(
        get_package_share_directory('rm_driver'), 'config', 'rm_65_config.yaml'
    )
    
    node_rm_driver = Node(
        package='rm_driver',
        executable='rm_driver',
        name='rm_driver',
        output='screen',
        parameters=[
            rm_driver_config,
            # 覆盖配置文件中的 IP (如果需要)
            # 注意: 如果 rm_driver 代码优先读取 yaml，这里可能需要手动修改 yaml
            # 但通常可以通过参数覆盖
        ]
    )
    
    # *重要提示*：睿尔曼的驱动通常需要我们在 yaml 里改 IP。
    # 为了方便，这里我们假设你已经在 yaml 里配好了，或者稍后在步骤里手动修改。

    # C. 大寰夹爪驱动 (dh_gripper_driver)
    # 使用我们在上一轮对话中写的 Python 驱动
    node_dh_driver = Node(
        package='dh_gripper_driver',
        executable='dh_gripper_driver',
        name='dh_gripper_driver',
        output='screen',
        parameters=[
            {'use_sim': False},             # 关闭仿真模式，连接真实硬件
            {'connect_port': LaunchConfiguration('gripper_port')},
            {'gripper_model': 'AG95_MB'}
        ],
        # 关键：将夹爪发布的 /gripper/joint_states 重映射到主话题 /joint_states
        # 这样 robot_state_publisher 才能同时收到手臂和夹爪的状态
        remappings=[
            ('/gripper/joint_states', '/joint_states')
        ]
    )

    # D. Rviz2 可视化
    node_rviz = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        # 使用 rm_description 中自带的配置，或者你可以保存一个新的配置
        arguments=['-d', os.path.join(rm_description_path, 'rviz', 'rm_65.rviz')]
    )

    return LaunchDescription([
        arm_ip_arg,
        gripper_port_arg,
        node_robot_state_publisher,
        node_rm_driver,
        node_dh_driver,
        node_rviz
    ])