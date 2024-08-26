#!/usr/bin/env python3
import cv2
import rclpy
from rclpy.node import Node
from cv_bridge import CvBridge
from second_turn_camera_project.srv import SecndProjectTurnCamer

class TurnCameraClient(Node):
    def __init__(self):
        super().__init__("turn_camera_client_node")
        self.client = self.create_client(SecndProjectTurnCamer,'turn_camer')
        self.req = SecndProjectTurnCamer.Request()
    def send_request(self, img):
        self.req.degree_turn = float (img)
        self.client.wait_for_service()
        self.future = self.client.call_async(self.req)
        rclpy.spin_until_future_complete(self,self.future)
        
        self.result = self.future.result()
        return self.result.image
    def display_image(self, image_msg):
        image = CvBridge().imgmsg_to_cv2(image_msg)
        cv2.imshow("Turn camera Image",image)
        cv2.waitKey(0)
        cv2.destroyAllWindows()


def main(args=None):
    rclpy.init()
    client_node = TurnCameraClient()
    print("Turn Camera client is running.....")
    try: 
        user_input = input("Enter a number in degrees to turn the camera: ")
        res = client_node.send_request(user_input)
        client_node.display_image(res)
    except KeyboardInterrupt:
        print("Ending Message....")
        client_node.destroy_node()

if __name__ == '__main__':
    main()
