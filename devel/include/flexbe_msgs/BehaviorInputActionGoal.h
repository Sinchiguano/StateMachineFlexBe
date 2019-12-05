// Generated by gencpp from file flexbe_msgs/BehaviorInputActionGoal.msg
// DO NOT EDIT!


#ifndef FLEXBE_MSGS_MESSAGE_BEHAVIORINPUTACTIONGOAL_H
#define FLEXBE_MSGS_MESSAGE_BEHAVIORINPUTACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <flexbe_msgs/BehaviorInputGoal.h>

namespace flexbe_msgs
{
template <class ContainerAllocator>
struct BehaviorInputActionGoal_
{
  typedef BehaviorInputActionGoal_<ContainerAllocator> Type;

  BehaviorInputActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  BehaviorInputActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::flexbe_msgs::BehaviorInputGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct BehaviorInputActionGoal_

typedef ::flexbe_msgs::BehaviorInputActionGoal_<std::allocator<void> > BehaviorInputActionGoal;

typedef boost::shared_ptr< ::flexbe_msgs::BehaviorInputActionGoal > BehaviorInputActionGoalPtr;
typedef boost::shared_ptr< ::flexbe_msgs::BehaviorInputActionGoal const> BehaviorInputActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace flexbe_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'flexbe_msgs': ['/home/casch/catkin_ws/src/flexbe_behavior_engine/flexbe_msgs/msg', '/home/casch/catkin_ws/devel/share/flexbe_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4fb958ec597ae0756978326ba2b4ac62";
  }

  static const char* value(const ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4fb958ec597ae075ULL;
  static const uint64_t static_value2 = 0x6978326ba2b4ac62ULL;
};

template<class ContainerAllocator>
struct DataType< ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "flexbe_msgs/BehaviorInputActionGoal";
  }

  static const char* value(const ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
BehaviorInputGoal goal\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: flexbe_msgs/BehaviorInputGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Available request types\n\
\n\
uint8 POINT_LOCATION 	    = 0\n\
uint8 SELECTED_OBJECT_ID    = 1\n\
uint8 WAYPOINT_GOAL_POSE    = 2\n\
uint8 GHOST_JOINT_STATES    = 3\n\
uint8 FOOTSTEP_PLAN_HEADER  = 4\n\
\n\
\n\
# Choose one of the available request types above\n\
uint8 request_type\n\
\n\
# Request message displayed to the operator\n\
# Provide context information, i.e. for which purpose the data is required.\n\
# The operator will be told which type of data to provide indepently from this message.\n\
string msg\n\
\n\
";
  }

  static const char* value(const ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BehaviorInputActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::flexbe_msgs::BehaviorInputActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::flexbe_msgs::BehaviorInputGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FLEXBE_MSGS_MESSAGE_BEHAVIORINPUTACTIONGOAL_H
