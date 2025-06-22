from setuptools import find_packages
from setuptools import setup

setup(
    name='homework1_petr',
    version='0.2.0',
    packages=find_packages(
        include=('homework1_petr', 'homework1_petr.*')),
)
