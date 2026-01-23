cmake_minimum_required(VERSION 3.8)
project(motor_control)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(interfaces REQUIRED)

add_library(dynamixel_SDK SHARED IMPORTED)
set_property(TARGET dynamixel_SDK PROPERTY IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/lib/libdxl_sbc_cpp.so")

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

add_executable(motor_control src/motor_control.cpp)


target_include_directories(dynamixel_SDK INTERFACE "${CMAKE_SOURCE_DIR}/include/dynamixel_sdk")


ament_target_dependencies(motor_control rclcpp interfaces)    # CHANGE

target_link_libraries(motor_control dynamixel_SDK)

install(TARGETS
        motor_control
        DESTINATION lib/${PROJECT_NAME})
ament_package()
