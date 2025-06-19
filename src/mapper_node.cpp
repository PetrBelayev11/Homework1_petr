
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "homework1_petr/msg/twist_array.hpp"

class MapperNode : public rclcpp::Node
{
public:
  MapperNode() : Node("mapper_node")
  {
    sub_ = create_subscription<homework1_petr::msg::TwistArray>("turtles_cmd", 10, std::bind(&MapperNode::callback, this, std::placeholders::_1));
    for (int i = 1; i <= 4; ++i) {
      pubs_.push_back(create_publisher<geometry_msgs::msg::Twist>("/turtle" + std::to_string(i) + "/cmd_vel", 10));
    }
  }

private:
  void callback(const homework1_petr::msg::TwistArray::SharedPtr msg)
  {
    pubs_[0]->publish(msg->t1);
    pubs_[1]->publish(msg->t2);
    pubs_[2]->publish(msg->t3);
    pubs_[3]->publish(msg->t4);
  }

  rclcpp::Subscription<homework1_petr::msg::TwistArray>::SharedPtr sub_;
  std::vector<rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr> pubs_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MapperNode>());
  rclcpp::shutdown();
  return 0;
}

