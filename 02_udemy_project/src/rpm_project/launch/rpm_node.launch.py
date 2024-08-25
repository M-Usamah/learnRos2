from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess


def generate_launch_description():
    return LaunchDescription([
        Node(
            package="rpm_project",
            executable="rpm_pub_pram.py",
            name="rpm_pub_parm_node"
        ), Node(
            package="rpm_project",
            executable="speed_calc_pram.py",
            name="speed_calc_pram_node"
        ),
        ExecuteProcess(
            cmd=['ros2', 'topic', 'echo', '/rpm'],
            output="screen"
        ), 
        ExecuteProcess(
            cmd=['ros2', 'topic', 'echo', '/speed'],
            output="screen"
        )
    ])
