from setuptools import find_packages
from setuptools import setup

setup(
    name='first_rpm_project',
    version='0.0.0',
    packages=find_packages(
        include=('first_rpm_project', 'first_rpm_project.*')),
)
