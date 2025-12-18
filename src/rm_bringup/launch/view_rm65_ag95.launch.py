import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import Command, LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    # 1. 声明参数
    use_sim_time_arg = DeclareLaunchArgument('use_sim_time', default_value='false')

    # 2. 处理 URDF (使用我们修复好的 integrated 文件)
    xacro_file = os.path.join(
        get_package_share_directory('rm_description'), 
        'urdf', 
        'rm_65_ag95_integrated.xacro'
    )
    
    # 将 xacro 转换为 XML 字符串
    robot_description_content = Command(['xacro ', xacro_file])
    robot_description = {'robot_description': robot_description_content}

    # 3. 节点定义

    # A. Robot State Publisher
    # 负责接收关节角度，计算模型姿态 TF
    node_rsp = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[robot_description]
    )

    # B. Joint State Publisher GUI (关键节点)
    # 这个节点会自动创建一个带滑块的窗口
    # 它会扫描 URDF，发现 "joint1...6" 和 "gripper_finger1_joint"，并为它们生成滑块
    node_jsp_gui = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui',
        output='screen'
    )

    # C. Rviz2
    # 加载默认配置，避免之前的配置干扰
    node_rviz = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-f', 'base_link'] # 强制指定坐标系，防止显示空白
    )

    return LaunchDescription([
        use_sim_time_arg,
        node_rsp,
        node_jsp_gui,
        node_rviz
    ])