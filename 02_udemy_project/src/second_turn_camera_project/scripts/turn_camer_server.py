#!/usr/bin/env python3
import os
import cv2
import rclpy
from rclpy.node import Node
from cv_bridge import CvBridge
from second_turn_camera_project.srv import SecndProjectTurnCamer

class TurnCameraServer(Node):
    def __init__(self):
        super().__init__("turn_camera_server_node")
        self.available_angel = [-30,-15,0,15,30]
        self.srv = self.create_service(SecndProjectTurnCamer, 'turn_camer',self.return_image)
    def return_image(self,request,response):
        image = self.get_image(request.degree_turn)
        image_msg = CvBridge().cv2_to_imgmsg(image)
        response.image = image_msg
        return response
    def get_image(self,angle):
        closest_angle = min(self.available_angel,key=lambda x:abs(x-angle))
        print(closest_angle)
        return self.read_in_image_by_filename(f"{str(closest_angle)}.png")
    def read_in_image_by_filename(self,file_name):
        dir_name = os.path.dirname(__file__)
        install_dir_index = dir_name.index("install/")
        file_location = f"{dir_name[:install_dir_index]}02_udemy_project/src/second_turn_camera_project/images/{file_name}"
        
        return cv2.imread(file_location)
    
def main(arg=None):
    rclpy.init()
    server_node = TurnCameraServer()
    print("Truning Camere Server Running.....")
    
    try:
        rclpy.spin(server_node)
    except KeyboardInterrupt:
        print("terminating Node...\n")
        server_node.destroy_node()
        
if __name__ == "__main__":
    main()