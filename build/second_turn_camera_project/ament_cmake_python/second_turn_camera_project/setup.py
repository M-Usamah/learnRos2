from setuptools import find_packages
from setuptools import setup

setup(
    name='second_turn_camera_project',
    version='0.0.0',
    packages=find_packages(
        include=('second_turn_camera_project', 'second_turn_camera_project.*')),
)
