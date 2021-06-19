#include "ros/ros.h"
#include "visualization_msgs/Marker.h" // публикуем этот тип сообщений

int main(int argc, char **argv) {
   ros::init(argc, argv, "point_publisher");
   ros::NodeHandle nh;
   ros::Publisher pub = nh.advertise<visualization_msgs::Marker>("pt_topic", 10, true); // pt_topic указать в rviz
   visualization_msgs::Marker mrk; // публикуем сообщение (1 точка)

   mrk.header.frame_id = "/point_on_map"; // point_on_map указать в rviz
   mrk.header.stamp = ros::Time::now(); 
   mrk.ns = "there is point";
   mrk.id = 0; 
   mrk.action = visualization_msgs::Marker::ADD; 

   mrk.type = visualization_msgs::Marker::POINTS; // маркет как набор точек
   mrk.scale.x = 0.5;
   mrk.scale.y = 0.5;
   mrk.color.r = 1.0;
   mrk.color.g = 0.0;
   mrk.color.b = 0.0;
   mrk.color.a = 1.0;

   geometry_msgs::Point p;
   p.x = 10;
   p.y = 10;
   p.z = 5;
   mrk.points.push_back(p);
   pub.publish(mrk);
   sleep(1);
   return 0; 
}
