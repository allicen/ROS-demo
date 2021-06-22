#include "ros/ros.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv) {

     ros::init(argc, argv, "robot"); // publisher - имя по умолчанию

     ROS_INFO("It works!");

     ros::spinOnce(); // ожидание всех процессов ноды
     return 0;
}