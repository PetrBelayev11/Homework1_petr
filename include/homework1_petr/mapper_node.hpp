#pragma once

#include "rclcpp/rclcpp.hpp"
#include "homework1_petr/msg/twist_array.hpp"
#include "geometry_msgs/msg/twist.hpp"

class MapperNode : public rclcpp::Node
{
public:
    MapperNode();
private:
    rclcpp::Subscription<homework1_petr::msg::TwistArray>::SharedPtr twist_array_sub_;
    std::vector<rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr> turtle_cmd_pubs_;
    void twist_array_callback(const homework1_petr::msg::TwistArray::SharedPtr msg);
};