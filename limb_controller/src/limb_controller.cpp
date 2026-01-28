#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "interfaces/msg/limb_command.hpp"
#include "Network.h"

using namespace std::chrono_literals;
using std::placeholders::_1;

class LimbController : public rclcpp::Node
{
public:
    LimbController()
    : Node("LimbController"), count_(0)
    {
        this->declare_parameter("Network","placeholder.json");
        publisher_ = this->create_publisher<interfaces::msg::LimbCommand>("LimbCommands", 10);
        timer_ = this->create_wall_timer(
        500ms, std::bind(&LimbController::timer_callback, this));
    }

private:
    void timer_callback()
    {
        auto message = interfaces::msg::LimbCommand();

        publisher_->publish(message);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<interfaces::msg::LimbCommand>::SharedPtr publisher_;
    size_t count_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<LimbController>());
    rclcpp::shutdown();
    return 0;
}