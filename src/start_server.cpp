#include "rclcpp/rclcpp.hpp"
#include "std_srvs/srv/empty.hpp"
#include "std_msgs/msg/bool.hpp"

class StartServer : public rclcpp::Node {
public:
    StartServer() : Node("start_server") {
        start_pub_ = this->create_publisher<std_msgs::msg::Bool>("/start_topic", 10);

        start_srv_ = this->create_service<std_srvs::srv::Empty>(
            "/start",
            [this](const std_srvs::srv::Empty::Request::SharedPtr,
                   std_srvs::srv::Empty::Response::SharedPtr) -> void {
                RCLCPP_INFO(this->get_logger(), "Start service called");
                std_msgs::msg::Bool msg;
                msg.data = true;
                start_pub_->publish(msg);
            });

        stop_srv_ = this->create_service<std_srvs::srv::Empty>(
            "/stop",
            [this](const std_srvs::srv::Empty::Request::SharedPtr,
                   std_srvs::srv::Empty::Response::SharedPtr) -> void {
                RCLCPP_INFO(this->get_logger(), "Stop service called");
                std_msgs::msg::Bool msg;
                msg.data = false;
                start_pub_->publish(msg);
            });
    }

private:
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr start_pub_;
    rclcpp::Service<std_srvs::srv::Empty>::SharedPtr start_srv_;
    rclcpp::Service<std_srvs::srv::Empty>::SharedPtr stop_srv_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<StartServer>());
    rclcpp::shutdown();
    return 0;
}