execute_process(COMMAND "/home/casch/catkin_ws/build/flexbe_behavior_engine/flexbe_testing/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/casch/catkin_ws/build/flexbe_behavior_engine/flexbe_testing/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
