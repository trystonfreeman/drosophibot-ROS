#include <chrono>
#include <functional>
#include <memory>
#include <string>
// ROS stuff
#include "rclcpp/rclcpp.hpp"
#include "interfaces/msg/strain_data.hpp"

// Linux stuff for reading from USB
#include <fcntl.h>
#include <errno.h>
#include <termios.h>
#include <unistd.h>


using namespace std::chrono_literals;
using std::placeholders::_1;

#define NUM_SAMPLES 20

#define NUM_GAUGES 36

float zero_data[NUM_GAUGES] = {};
class StrainMonitor : public rclcpp::Node
{
public:
    StrainMonitor()
    : Node("StrainMonitor")
    {
        publisher_ = this->create_publisher<interfaces::msg::StrainData>("StrainData", 10);
        timer_ = this->create_wall_timer(
        500ms, std::bind(&StrainMonitor::timer_callback, this));
    }

private:
    void timer_callback()
    {
        auto message = interfaces::msg::StrainData();

        publisher_->publish(message);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<interfaces::msg::StrainData>::SharedPtr publisher_;

};

int main(int argc, char * argv[])
{
    // Serial port setup
    int serial_port = open("/dev/ttyUSB1", O_RDWR);

    if (serial_port < 0) {
        printf("Error %i from open: %s\n", errno, strerror(errno));
    }
    struct termios tty;

    if(tcgetattr(serial_port, &tty) != 0) {
    printf("Error %i from tcgetattr: %s\n", errno, strerror(errno));
    }

    tty.c_cflag &= ~PARENB;
    tty.c_cflag &= ~CSTOPB;
    tty.c_cflag |= CS8;
    tty.c_cflag &= ~CRTSCTS;
    tty.c_cflag |= CREAD | CLOCAL;
    tty.c_lflag &= ~ECHO;
    tty.c_lflag &= ~ISIG;
    tty.c_iflag &= ~(IXON | IXOFF | IXANY);
    tty.c_iflag &= ~(IGNBRK|BRKINT|PARMRK|ISTRIP|INLCR|IGNCR|ICRNL);

    tty.c_cc[VTIME] = 10;
    tty.c_cc[VMIN] = 0;

    cfsetispeed(&tty, B9600);
    cfsetospeed(&tty, B9600);

    if (tcsetattr(serial_port, TCSANOW, &tty) != 0) {
    printf("Error %i from tcsetattr: %s\n", errno, strerror(errno));
    }
    uint8_t init_msg[1] = {1};
    write(serial_port, init_msg, sizeof(init_msg));

    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<StrainMonitor>());
    rclcpp::shutdown();
    return 0;
}