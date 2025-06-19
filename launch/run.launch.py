from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='homework1',
            executable='commander_node',
            name='commander_node'
        ),
 
        Node(
            package='homework1_petr',
            executable='start_server',
            name='start_server'
        ),
        Node(
            package='homework1_petr',
            executable='turtles_spawner',
            name='turtles_spawner'
        ),
        Node(
            package='homework1_petr',
            executable='collector_node',
            name='collector_node'
        ),
        Node(
            package='homework1_petr',
            executable='mapper_node',
            name='mapper_node'
        ),
        Node(
            package='homework1_petr',
            executable='status_node',
            name='status_node'
        ),
    ])