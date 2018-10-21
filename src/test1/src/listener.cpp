#include "ros/ros.h"
#include "test1/Gaitmsg.h"
#include <iostream>

void gaitCallback(const test1::Gaitmsg::ConstPtr &msg)
{
	float cmsg_num = msg->gait_num;
	std::string cmag_name = msg->gait_name;
	std::cout << "Gaitmsg_num: " << cmsg_num << " Gaitmsg_name: " << cmag_name << std::endl;

}

int main (int argc, char **argv)
{
	ros::init(argc,argv,"listener");
	ros::NodeHandle n;
	ros::Subscriber sub = n.subscribe("Gait_info",1,gaitCallback);
	ros::spin();
	return 0;
}