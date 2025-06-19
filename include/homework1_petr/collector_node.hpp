#pragma once

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "std_msgs/msg/bool.hpp"
#include "homework1_petr/msg/twist_array.hpp"

class CollectorNode : public rclcpp::Node
{
public:
    CollectorNode();
private:
    std::vector<rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr> cmd_subs_;
    rclcpp::Publisher<homework1_petr::msg::TwistArray>::SharedPtr twist_array_pub_;
    std::array<geometry_msgs::msg::Twist, 4> twists_;
    void create_cmd_subscribers();
};