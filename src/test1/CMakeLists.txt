cmake_minimum_required(VERSION 2.8.3)
project(test1)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  message_generation
)


add_message_files(
   FILES
   Gaitmsg.msg
)


generate_messages(
  DEPENDENCIES
  std_msgs
)


catkin_package(
 CATKIN_DEPENDS roscpp rospy std_msgs message_runtime)


include_directories(
  ${catkin_INCLUDE_DIRS}
)


add_executable(talker src/talker.cpp)
add_dependencies(talker test1_generate_messages_cpp)
target_link_libraries(talker ${catkin_LIBRARIES})

add_executable(listener src/listener.cpp)
add_dependencies(listener test1_generate_messages_cpp)
target_link_libraries(listener ${catkin_LIBRARIES})

