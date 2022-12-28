
#include <chrono> 
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;

namespace ntis
{

class GroundRobotControl : public rclcpp::Node 
{
  public:
      GroundRobotControl() : Node("ground_robot_control") 
      {



      }

  private:
    std::string 

}

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<GroundRobotControl>());
  rclcpp::shutdown();
  return 0;
}


}