#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

WHEEL_RADIUS = 12.5 / 100

class SpeedCalculator(Node):
    def __init__(self):
        super().__init__("rpm_cal")
        self.declare_parameter("wheel_radius", WHEEL_RADIUS)
        self.sub = self.create_subscription(Float32, 'rpm',self.calculator_speed,10)
        self.pub = self.create_publisher(Float32,"speed", 10)

    def calculator_speed(self,rpm_msg):
        wheel_radius_parameter = self.get_parameter("wheel_radius").get_parameter_value().double_value
        speed = rpm_msg.data * wheel_radius_parameter  * 2 * 3.14159 / 60
        speed_msg = Float32()
        speed_msg.data = float(speed)
        self.pub.publish(speed_msg)


def main(args=None):
    rclpy.init()
    speed_calc_node = SpeedCalculator()
    print("Wating for data .....")
    try: 
        rclpy.spin(speed_calc_node)
    except KeyboardInterrupt:
        print("Ending Message....")
        speed_calc_node.destroy_node()

if __name__ == '__main__':
    main()