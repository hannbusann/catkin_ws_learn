## catkin_ws_learn

This is a repository for beginners to learn basic writing of ROS C++ node.

### Prerequisites

- Ubuntu 16.04
- ROS Kinetic

### Installation

Execute these commands in your terminal line by line.

```
sudo apt-get install git -y
cd ~
mkdir ROS_LEARN
cd ROS_LEARN
git clone git@github.com:hannbusann/catkin_ws_learn.git
catkin_make
```

Don't forget to ``source devel/setup.bash``

### Run

In your current terminal, execute this command to run **talker** node.

```
rosrun test1 talker
```

Open a new terminal, and execute these commands to run **listener** node.

```
cd ~/ROS_LEARN/catkin_ws_learn
source devel/setup.bash
rosrun test1 listener
```

Open a new terminal to view the diagram of what **ros** nodes are doing.

```
rqt_graph
```



