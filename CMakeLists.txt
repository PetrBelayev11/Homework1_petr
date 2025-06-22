cmake_minimum_required(VERSION 3.5)
project(homework1_petr)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(std_srvs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(turtlesim REQUIRED)
find_package(tf2 REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(builtin_interfaces REQUIRED)
set(CMAKE_CXX_STANDARD 17)

set(dependencies
  rclcpp
  turtlesim
  tf2
  std_msgs
  std_srvs
  geometry_msgs
  rosidl_default_generators
  builtin_interfaces
)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/TwistArray.msg"
  "srv/StartStop.srv"
  "msg/PoseArrayCustom.msg"
  DEPENDENCIES ${dependencies} builtin_interfaces std_msgs geometry_msgs
)

add_executable(commander_node src/commander_node.cpp)
ament_target_dependencies(commander_node ${dependencies})

add_executable(start_server src/start_server.cpp)
ament_target_dependencies(start_server ${dependencies})

add_executable(turtles_spawner src/turtles_spawner.cpp)
ament_target_dependencies(turtles_spawner ${dependencies})

add_executable(collector_node src/collector_node.cpp)
ament_target_dependencies(collector_node ${dependencies})

add_executable(mapper_node src/mapper_node.cpp)
ament_target_dependencies(mapper_node ${dependencies})

add_executable(status_node src/status_node.cpp)
ament_target_dependencies(status_node ${dependencies})

include_directories(include)

rosidl_target_interfaces(commander_node
  ${PROJECT_NAME} "rosidl_typesupport_cpp")
rosidl_target_interfaces(start_server
  ${PROJECT_NAME} "rosidl_typesupport_cpp")
rosidl_target_interfaces(turtles_spawner
  ${PROJECT_NAME} "rosidl_typesupport_cpp")
rosidl_target_interfaces(collector_node
  ${PROJECT_NAME} "rosidl_typesupport_cpp")
rosidl_target_interfaces(mapper_node
  ${PROJECT_NAME} "rosidl_typesupport_cpp")
rosidl_target_interfaces(status_node
  ${PROJECT_NAME} "rosidl_typesupport_cpp")

install(TARGETS
  commander_node
  start_server
  turtles_spawner
  collector_node
  mapper_node
  status_node
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

ament_export_include_directories(include)
ament_export_dependencies(${dependencies})
ament_export_dependencies(rosidl_default_runtime)

ament_package()