#include<auto_landing/tracking.hpp>

using namespace ariitk::auto_landing;

int main(int argc, char **argv){
    ros::init(argc, argv, "tracking_node");
    ros::NodeHandle nh;

    Tracking mav_husky;

    mav_husky.init(nh, argv);

    ros::Rate loop_rate(10);

    while(ros::ok()) {
        ros::spinOnce();
        mav_husky.run();
        loop_rate.sleep();
    }

    return 0;

}