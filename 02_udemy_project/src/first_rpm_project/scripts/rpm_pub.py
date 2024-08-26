#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

RPM = 10

class RpmPublisher(Node):
    def __init__(self):
        super().__init__("RPM_publisher_node")
        self.pub = self.create_publisher(Float32,"rpm", 10)
        self.timer = self.create_timer(0.5, self.publish_rpm)
        self.counter = 0

    def publish_rpm(self):
        msg = Float32()
        msg.data = float(RPM)
        self.pub.publish(msg)
def main(args=None):
    rclpy.init()
    my_message = RpmPublisher()
    print("RPM is being Publish.....")
    try: 
        rclpy.spin(my_message)
    except KeyboardInterrupt:
        print("Ending Message....")
        my_message.destroy_node()

if __name__ == '__main__':
    main()