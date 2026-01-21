#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "interfaces/msg/motor_data.hpp"
#include "interfaces/msg/motor_command.hpp"
#include "dynamixel_sdk.h"

using namespace std::chrono_literals;
using std::placeholders::_1;

/* This example creates a subclass of Node and uses std::bind() to register a
* member function as a callback from the timer. */
uint8_t dxl_id = 1;
//uint16_t torque_on_address = 64;
uint16_t LED_address = 65;
uint16_t present_position_address = 132;
uint8_t data = 1; // 1 to turn on the torque, 0 to turn off



class MotorController : public rclcpp::Node
{
public:
    MotorController(dynamixel::PortHandler *portHandler,dynamixel::PacketHandler *packetHandler)
    : Node("MotorController"), count_(0), portHandler(portHandler), packetHandler(packetHandler)
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
        for (uint8_t id = 0; id < 22; id++){
			uint32_t position = 0;
			packetHandler->read4ByteTxRx(portHandler, dxl_id, present_position_address, &position);
			message.pos[id] = position;
			RCLCPP_INFO(this->get_logger(), "ID: '%i'", id);
        	RCLCPP_INFO(this->get_logger(), "Position: '%i'", message.pos[id]);
        	publisher_->publish(message);
		}
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<interfaces::msg::MotorData>::SharedPtr publisher_;
    rclcpp::Subscription<interfaces::msg::MotorCommand>::SharedPtr subscription_;
    size_t count_;
	dynamixel::PortHandler *portHandler;
	dynamixel::PacketHandler *packetHandler;
    void topic_callback(const interfaces::msg::MotorCommand::SharedPtr msg) const{
		RCLCPP_INFO(this->get_logger(), "command: '%i'", msg->vel[0]);
    }
};

int main(int argc, char * argv[])
{
	dynamixel::PortHandler *portHandler = dynamixel::PortHandler::getPortHandler("/dev/ttyUSB0"); // your dxl port name
	dynamixel::PacketHandler *packetHandler = dynamixel::PacketHandler::getPacketHandler(2.0); //protocol version
	portHandler->openPort();
	portHandler->setBaudRate(1000000);
 	packetHandler->write1ByteTxRx(portHandler, dxl_id, LED_address, data);

    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MotorController>(portHandler,packetHandler));
    rclcpp::shutdown();
    return 0;
}
