#pragma once

#include "rclcpp/rclcpp.hpp"
#include "std_srvs/srv/empty.hpp"
#include "std_msgs/msg/bool.hpp"

class StartServer : public rclcpp::Node
{
public:
    StartServer();
private:
    rclcpp::Service<std_srvs::srv::Empty>::SharedPtr start_service_;
    rclcpp::Service<std_srvs::srv::Empty>::SharedPtr stop_service_;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr start_pub_;
    void handle_start(
        const std::shared_ptr<std_srvs::srv::Empty::Request> request,
        std::shared_ptr<std_srvs::srv::Empty::Response> response);

    void handle_stop(
        const std::shared_ptr<std_srvs::srv::Empty::Request> request,
        std::shared_ptr<std_srvs::srv::Empty::Response> response);
};