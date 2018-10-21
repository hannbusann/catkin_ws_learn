#include "ros/ros.h"
#include "test1/Gaitmsg.h"

int main(int argc, char **argv)
{
	ros::init(argc,argv,"talker");
	ros::NodeHandle nh;
	test1::Gaitmsg gait;
	gait.gait_name = "kick";
	gait.gait_num = 123;
	ros::Publisher pub = nh.advertise<test1::Gaitmsg> ("Gait_info" , 1);
	ros::Rate loop_rate(1.0);

	while(ros::ok()){
		pub.publish(gait);
		loop_rate.sleep();
	}
	return 0;

}
