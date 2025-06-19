
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/bool.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "homework1_petr/msg/twist_array.hpp"
#include "turtlesim/msg/pose.hpp"
#include "homework1_petr/msg/pose_array_custom.hpp"

class CollectorNode : public rclcpp::Node
{
public:
  CollectorNode() : Node("collector_node")
  {
    for (int i = 1; i <= 4; ++i) {
      auto cmd_topic = "/turtle" + std::to_string(i) + "_cmd";
      auto pose_topic = "/turtle" + std::to_string(i) + "/pose";
      cmd_subs_.push_back(create_subscription<geometry_msgs::msg::Twist>(cmd_topic, 10, [this, i](const geometry_msgs::msg::Twist::SharedPtr msg) {
        cmd_data_[i - 1] = *msg;
        publish_cmd();
      }));
      pose_subs_.push_back(create_subscription<turtlesim::msg::Pose>(pose_topic, 10, [this, i](const turtlesim::msg::Pose::SharedPtr msg) {
        pose_data_[i - 1] = *msg;
        publish_pose();
      }));
    }
    cmd_pub_ = create_publisher<homework1_petr::msg::TwistArray>("turtles_cmd", 10);
    pose_pub_ = create_publisher<homework1_petr::msg::PoseArrayCustom>("turtles_positions", 10);
  }

private:
  void publish_cmd()
  {
    auto msg = homework1_petr::msg::TwistArray();
    msg.t1 = cmd_data_[0];
    msg.t2 = cmd_data_[1];
    msg.t3 = cmd_data_[2];
    msg.t4 = cmd_data_[3];
    cmd_pub_->publish(msg);
  }

  void publish_pose()
  {
    auto msg = homework1_petr::msg::PoseArrayCustom();
    msg.t1 = pose_data_[0];
    msg.t2 = pose_data_[1];
    msg.t3 = pose_data_[2];
    msg.t4 = pose_data_[3];
    pose_pub_->publish(msg);
  }

  std::vector<rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr> cmd_subs_;
  std::vector<rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr> pose_subs_;
  std::array<geometry_msgs::msg::Twist, 4> cmd_data_;
  std::array<turtlesim::msg::Pose, 4> pose_data_;
  rclcpp::Publisher<homework1_petr::msg::TwistArray>::SharedPtr cmd_pub_;
  rclcpp::Publisher<homework1_petr::msg::PoseArrayCustom>::SharedPtr pose_pub_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<CollectorNode>());
  rclcpp::shutdown();
  return 0;
}

