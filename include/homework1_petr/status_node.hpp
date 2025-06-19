#pragma once

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/bool.hpp"
#include "std_srvs/srv/empty.hpp"

class StatusNode : public rclcpp::Node
{
public:
    StatusNode();
private:
    std::vector<bool> turtle_status_;
    std::vector<rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr> done_subs_;
    rclcpp::Service<std_srvs::srv::Empty>::SharedPtr status_srv_;

    void handle_status(
        const std::shared_ptr<std_srvs::srv::Empty::Request> request,
        std::shared_ptr<std_srvs::srv::Empty::Response> response);
    void create_subscribers();
};