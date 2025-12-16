import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node
import xacro

def generate_launch_description():
    # 获取包路径
    rm_pkg_path = get_package_share_directory('rm_description')
    
    # 解析 Xacro 文件
    xacro_file = os.path.join(rm_pkg_path, 'urdf', 'rm_65_with_ag95.urdf.xacro')
    doc = xacro.process_file(xacro_file)
    robot_description_config = doc.toxml()

    # Robot State Publisher
    node_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description_config}]
    )

    # Joint State Publisher GUI (用于拖动滑块测试关节)
    node_joint_state_publisher_gui = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui'
    )

    # Rviz
    node_rviz = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        # 可以复用现有的 rviz 配置
        arguments=['-d', os.path.join(rm_pkg_path, 'rviz', 'rm_65.rviz')]
    )

    return LaunchDescription([
        node_robot_state_publisher,
        node_joint_state_publisher_gui,
        node_rviz
    ])