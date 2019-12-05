# Install script for directory: /home/casch/catkin_ws/src/flexbe_behavior_engine/flexbe_widget

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/casch/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  include("/home/casch/catkin_ws/build/flexbe_behavior_engine/flexbe_widget/catkin_generated/safe_execute_install.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/casch/catkin_ws/build/flexbe_behavior_engine/flexbe_widget/catkin_generated/installspace/flexbe_widget.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flexbe_widget/cmake" TYPE FILE FILES
    "/home/casch/catkin_ws/build/flexbe_behavior_engine/flexbe_widget/catkin_generated/installspace/flexbe_widgetConfig.cmake"
    "/home/casch/catkin_ws/build/flexbe_behavior_engine/flexbe_widget/catkin_generated/installspace/flexbe_widgetConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flexbe_widget" TYPE FILE FILES "/home/casch/catkin_ws/src/flexbe_behavior_engine/flexbe_widget/package.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/flexbe_widget" TYPE PROGRAM FILES
    "/home/casch/catkin_ws/src/flexbe_behavior_engine/flexbe_widget/bin/evaluate_logs"
    "/home/casch/catkin_ws/src/flexbe_behavior_engine/flexbe_widget/bin/be_compress"
    "/home/casch/catkin_ws/src/flexbe_behavior_engine/flexbe_widget/bin/be_launcher"
    "/home/casch/catkin_ws/src/flexbe_behavior_engine/flexbe_widget/bin/create_repo"
    "/home/casch/catkin_ws/src/flexbe_behavior_engine/flexbe_widget/bin/be_action_server"
    )
endif()
