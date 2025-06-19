#pragma once


#include <string>
#include "rclcpp/rclcpp.hpp"
#include "turtlesim/srv/kill.hpp"
#include "turtlesim/srv/spawn.hpp"


class TurtlesSpawner : public rclcpp::Node
{
public:
    TurtlesSpawner();
private:
    rclcpp::Client<turtlesim::srv::Kill>::SharedPtr kill_client_;
    rclcpp::Client<turtlesim::srv::Spawn>::SharedPtr spawn_client_;
    void kill_and_spawn();
};