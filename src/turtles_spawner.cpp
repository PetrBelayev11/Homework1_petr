#include <chrono>
#include <memory>
#include <vector>

#include "rclcpp/rclcpp.hpp"
#include "turtlesim/srv/kill.hpp"
#include "turtlesim/srv/spawn.hpp"
#include "homework1_petr/turtle_info.hpp"

using namespace std::chrono_literals;

class TurtlesSpawner : public rclcpp::Node
{
public:
  TurtlesSpawner() : Node("turtles_spawner")
  {
    kill_client_ = this->create_client<turtlesim::srv::Kill>("kill");
    spawn_client_ = this->create_client<turtlesim::srv::Spawn>("spawn");

    while (!kill_client_->wait_for_service(1s)) {
      RCLCPP_INFO(this->get_logger(), "Waiting for kill service...");
    }
    while (!spawn_client_->wait_for_service(1s)) {
      RCLCPP_INFO(this->get_logger(), "Waiting for spawn service...");
    }

    kill_turtle();
  }

private:
  void kill_turtle()
  {
    auto request = std::make_shared<turtlesim::srv::Kill::Request>();
    request->name = "turtle1";

    auto result = kill_client_->async_send_request(request,
      [this](rclcpp::Client<turtlesim::srv::Kill>::SharedFuture /*future*/) {
        RCLCPP_INFO(this->get_logger(), "Initial turtle killed");
        spawn_turtles();
      });
  }

  void spawn_turtles()
  {
    std::vector<TurtleInfo> turtles = {
      {1.0, 1.0, M_PI / 2.0f, "turtle1"},
      {8.0, 5.0, M_PI / 2.0f, "turtle2"},
      {9.25, 5.0, M_PI, "turtle3"},
      {9.25, 5.0, 0.0, "turtle4"}
    };

    spawn_next_turtle(turtles, 0);
  }

  void spawn_next_turtle(const std::vector<TurtleInfo> turtles, size_t index)
  {
    if (index >= turtles.size()) {
      RCLCPP_INFO(this->get_logger(), "All turtles spawned.");
      return;
    }

    auto request = std::make_shared<turtlesim::srv::Spawn::Request>();
    request->x = turtles[index].x;
    request->y = turtles[index].y;
    request->theta = turtles[index].theta;
    request->name = turtles[index].name;

    auto result = spawn_client_->async_send_request(request,
      [this, turtles, index](rclcpp::Client<turtlesim::srv::Spawn>::SharedFuture /*future*/) {
        RCLCPP_INFO(this->get_logger(), "Spawned %s", turtles[index].name.c_str());
        spawn_next_turtle(turtles, index + 1);
      });
  }

  rclcpp::Client<turtlesim::srv::Kill>::SharedPtr kill_client_;
  rclcpp::Client<turtlesim::srv::Spawn>::SharedPtr spawn_client_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<TurtlesSpawner>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}