#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "turtlesim/msg/pose.hpp"

#include "homework1_petr/msg/twist_array.hpp"
#include "homework1_petr/msg/pose_array_custom.hpp"

#include <array>
#include <vector>
#include <tf2/LinearMath/Quaternion.h>

// ✅ Conversion function: turtlesim::Pose -> geometry_msgs::Pose
geometry_msgs::msg::Pose convert_pose(const turtlesim::msg::Pose &in)
{
  geometry_msgs::msg::Pose out;
  out.position.x = in.x;
  out.position.y = in.y;
  out.position.z = 0.0;

  tf2::Quaternion q;
  q.setRPY(0, 0, in.theta);  // Roll and pitch are 0 in 2D
  out.orientation.x = q.x();
  out.orientation.y = q.y();
  out.orientation.z = q.z();
  out.orientation.w = q.w();

  return out;
}

class CollectorNode : public rclcpp::Node
{
public:
  CollectorNode() : Node("collector_node")
  {
    cmd_data_.fill(geometry_msgs::msg::Twist());
    pose_data_.fill(turtlesim::msg::Pose());

    for (int i = 1; i <= 4; ++i) {
      std::string cmd_topic = "/turtle" + std::to_string(i) + "_cmd";
      std::string pose_topic = "/turtle" + std::to_string(i) + "/pose";

      cmd_subs_.push_back(create_subscription<geometry_msgs::msg::Twist>(
        cmd_topic, 10,
        [this, i](geometry_msgs::msg::Twist::SharedPtr msg) {
          cmd_data_[i - 1] = *msg;
          publish_cmd();
        }));

      pose_subs_.push_back(create_subscription<turtlesim::msg::Pose>(
        pose_topic, 10,
        [this, i](turtlesim::msg::Pose::SharedPtr msg) {
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
    homework1_petr::msg::TwistArray msg;
    msg.t1 = cmd_data_[0];
    msg.t2 = cmd_data_[1];
    msg.t3 = cmd_data_[2];
    msg.t4 = cmd_data_[3];
    cmd_pub_->publish(msg);
  }

  void publish_pose()
  {
    homework1_petr::msg::PoseArrayCustom msg;
    msg.t1 = convert_pose(pose_data_[0]);
    msg.t2 = convert_pose(pose_data_[1]);
    msg.t3 = convert_pose(pose_data_[2]);
    msg.t4 = convert_pose(pose_data_[3]);
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