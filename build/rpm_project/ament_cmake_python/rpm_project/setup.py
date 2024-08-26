from setuptools import find_packages
from setuptools import setup

setup(
    name='rpm_project',
    version='0.0.0',
    packages=find_packages(
        include=('rpm_project', 'rpm_project.*')),
)
