#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "interfaces/msg/motor_data.hpp"
#include "interfaces/msg/motor_command.hpp"
#include "dynamixel_sdk.h"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
* member function as a callback from the timer. */

class MotorController : public rclcpp::Node
{
public:
    MotorController()
    : Node("MotorController"), count_(0)
    {
        publisher_ = this->create_publisher<interfaces::msg::MotorData>("motor_outputs", 10);
        timer_ = this->create_wall_timer(
        500ms, std::bind(&MotorController::timer_callback, this));
        subscription_ = this->create_subscription<interfaces::msg::MotorCommand>(
      "motor_commands", 10, std::bind(&MotorController::topic_callback, this, _1));
    }

private:
    void timer_callback()
    {
        auto message = interfaces::msg::MotorData();
        message.pos[0] = 0;
        message.vel[0] = 0;
        message.torque[0] = 0;

        RCLCPP_INFO(this->get_logger(), "Publishing: '%i'", message.pos[0]);
        publisher_->publish(message);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<interfaces::msg::MotorData>::SharedPtr publisher_;
    rclcpp::Subscription<interfaces::msg::MotorCommand>::SharedPtr subscription_;
    size_t count_;
    void topic_callback(const interfaces::msg::MotorCommand::SharedPtr msg) {

    }
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MotorController>());
    rclcpp::shutdown();
    return 0;
}
