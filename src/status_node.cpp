#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/bool.hpp"
#include "std_srvs/srv/empty.hpp"

class StatusNode : public rclcpp::Node
{
public:
  StatusNode() : Node("status_node")
  {
    service_ = create_service<std_srvs::srv::Empty>("status", std::bind(&StatusNode::handle_status, this, std::placeholders::_1, std::placeholders::_2));
    for (int i = 1; i <= 4; ++i) {
      done_subs_.push_back(create_subscription<std_msgs::msg::Bool>("/turtle" + std::to_string(i) + "_done", 10, [this, i](const std_msgs::msg::Bool::SharedPtr msg) {
        done_status_[i - 1] = msg->data;
      }));
    }
  }

private:
  void handle_status(const std_srvs::srv::Empty::Request::SharedPtr, const std_srvs::srv::Empty::Response::SharedPtr)
  {
    for (int i = 0; i < 4; ++i)
    {
      RCLCPP_INFO(this->get_logger(), "Turtle%d done status: %s", i + 1, done_status_[i] ? "true" : "false");
    }
  }

  std::vector<rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr> done_subs_;
  std::array<bool, 4> done_status_ = {false, false, false, false};
  rclcpp::Service<std_srvs::srv::Empty>::SharedPtr service_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<StatusNode>());
  rclcpp::shutdown();
  return 0;
}