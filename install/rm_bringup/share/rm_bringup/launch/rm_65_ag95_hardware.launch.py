import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, RegisterEventHandler
from launch.event_handlers import OnProcessExit
from launch.substitutions import LaunchConfiguration, Command
from launch_ros.actions import Node

def generate_launch_description():
    # 1. 声明参数
    arm_ip_arg = DeclareLaunchArgument('arm_ip', default_value='192.168.1.18')
    gripper_port_arg = DeclareLaunchArgument('gripper_port', default_value='/dev/ttyUSB0')

    # 2. 处理 URDF (使用 Command 处理 Xacro，确保生成纯 XML)
    # 注意：这里引用的是我们刚刚创建/确认的 integrated 文件
    xacro_file = os.path.join(
        get_package_share_directory('rm_description'), 
        'urdf', 
        'rm_65_ag95_integrated.xacro' # 确保文件名与第一步创建的一致
    )
    
    # 使用 xacro 命令将 .xacro 转换为纯 URDF 字符串
    robot_description_content = Command(['xacro ', xacro_file])
    robot_description = {'robot_description': robot_description_content}

    # 3. 节点定义

    # [关键] Robot State Publisher
    # 它发布 /tf_static 和 /tf，连接 base_link -> Link1 ... -> Link6 -> gripper_base ...
    node_rsp = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[robot_description]
    )

    # RM65 Driver (只负责发布机械臂关节状态 /joint_states)
    rm_driver_config = os.path.join(get_package_share_directory('rm_driver'), 'config', 'rm_65_config.yaml')
    node_rm_driver = Node(
        package='rm_driver',
        executable='rm_driver',
        name='rm_driver',
        output='screen',
        parameters=[rm_driver_config]
    )

    # DH Gripper Driver (只负责发布夹爪关节状态，并重映射到 /joint_states)
    node_dh_driver = Node(
        package='dh_gripper_driver',
        executable='dh_gripper_driver',
        name='dh_gripper_driver',
        output='screen',
        parameters=[
            {'use_sim': False},
            {'connect_port': LaunchConfiguration('gripper_port')},
            {'gripper_model': 'AG95_MB'}
        ],
        remappings=[('/gripper/joint_states', '/joint_states')]
    )

    # Rviz2
    # 强制设置 Fixed Frame 为 base_link
    rviz_config = os.path.join(get_package_share_directory('rm_description'), 'rviz', 'rm_65.rviz')
    node_rviz = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', rviz_config, '-f', 'base_link']
    )

    return LaunchDescription([
        arm_ip_arg,
        gripper_port_arg,
        node_rsp,
        node_rm_driver,
        node_dh_driver,
        node_rviz
    ])