#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class HelloWorldSubscriber(Node):
    def __init__(self):
        super().__init__("hello_world_sub_node")
        self.sub = self.create_subscription(String, 'hello_world_01',self.subscriber_callback,10)
    def subscriber_callback(self,msg):
        print("Received: "+msg.data)


def main(args=None):
    rclpy.init()
    my_message = HelloWorldSubscriber()
    print("Wating for data .....")
    try: 
        rclpy.spin(my_message)
    except KeyboardInterrupt:
        print("Ending Message....")
        my_message.destroy_node()

if __name__ == '__main__':
    main()