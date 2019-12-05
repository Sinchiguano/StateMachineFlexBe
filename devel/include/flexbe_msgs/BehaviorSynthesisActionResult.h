// Generated by gencpp from file flexbe_msgs/BehaviorSynthesisActionResult.msg
// DO NOT EDIT!


#ifndef FLEXBE_MSGS_MESSAGE_BEHAVIORSYNTHESISACTIONRESULT_H
#define FLEXBE_MSGS_MESSAGE_BEHAVIORSYNTHESISACTIONRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalStatus.h>
#include <flexbe_msgs/BehaviorSynthesisResult.h>

namespace flexbe_msgs
{
template <class ContainerAllocator>
struct BehaviorSynthesisActionResult_
{
  typedef BehaviorSynthesisActionResult_<ContainerAllocator> Type;

  BehaviorSynthesisActionResult_()
    : header()
    , status()
    , result()  {
    }
  BehaviorSynthesisActionResult_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , status(_alloc)
    , result(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalStatus_<ContainerAllocator>  _status_type;
  _status_type status;

   typedef  ::flexbe_msgs::BehaviorSynthesisResult_<ContainerAllocator>  _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::flexbe_msgs::BehaviorSynthesisActionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::flexbe_msgs::BehaviorSynthesisActionResult_<ContainerAllocator> const> ConstPtr;

}; // struct BehaviorSynthesisActionResult_

typedef ::flexbe_msgs::BehaviorSynthesisActionResult_<std::allocator<void> > BehaviorSynthesisActionResult;

typedef boost::shared_ptr< ::flexbe_msgs::BehaviorSynthesisActionResult > BehaviorSynthesisActionResultPtr;
typedef boost::shared_ptr< ::flexbe_msgs::BehaviorSynthesisActionResult const> BehaviorSynthesisActionResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::flexbe_msgs::BehaviorSynthesisActionResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::flexbe_msgs::BehaviorSynthesisActionResult_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::flexbe_msgs::BehaviorSynthesisActionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::flexbe_msgs::BehaviorSynthesisActionResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::flexbe_msgs::BehaviorSynthesisActionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::flexbe_msgs::BehaviorSynthesisActionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flexbe_msgs::BehaviorSynthesisActionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flexbe_msgs::BehaviorSynthesisActionResult_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::flexbe_msgs::BehaviorSynthesisActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d13a1c24e611f3c8aae59d09829d044b";
  }

  static const char* value(const ::flexbe_msgs::BehaviorSynthesisActionResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd13a1c24e611f3c8ULL;
  static const uint64_t static_value2 = 0xaae59d09829d044bULL;
};

template<class ContainerAllocator>
struct DataType< ::flexbe_msgs::BehaviorSynthesisActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "flexbe_msgs/BehaviorSynthesisActionResult";
  }

  static const char* value(const ::flexbe_msgs::BehaviorSynthesisActionResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::flexbe_msgs::BehaviorSynthesisActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
BehaviorSynthesisResult result\n\
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
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
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
MSG: flexbe_msgs/BehaviorSynthesisResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
# Provides feedback regarding possibly occured errors\n\
SynthesisErrorCodes error_code\n\
\n\
# Result of behavior synthesis as a list of state instantiations\n\
StateInstantiation[] states\n\
\n\
\n\
================================================================================\n\
MSG: flexbe_msgs/SynthesisErrorCodes\n\
int32 value\n\
\n\
# success\n\
int32 SUCCESS = 1\n\
\n\
# all other values will be considered as any sort of error\n\
================================================================================\n\
MSG: flexbe_msgs/StateInstantiation\n\
# Describes a single instantiation of a state\n\
\n\
# Path of this state inside the behavior\n\
# Last segment of the path is the name of this state\n\
# e.g. \"/Inner_Statemachine/This_State\"\n\
string state_path\n\
\n\
# Specifies the class implementing this state\n\
# Use one of the provided CLASS constants if this is not a primitive state\n\
# e.g. \"CalculationState\"\n\
string CLASS_STATEMACHINE 	= :STATEMACHINE\n\
string CLASS_CONCURRENCY 	= :CONCURRENCY\n\
string CLASS_PRIORITY 		= :PRIORITY\n\
string CLASS_BEHAVIOR 		= :BEHAVIOR\n\
string state_class\n\
\n\
\n\
\n\
# Only relevant for state machine, priority, and concurrency\n\
# Name of the initial state / state to be monitored\n\
string initial_state_name\n\
# Input and output keys (can be remapped below)\n\
string[] input_keys\n\
string[] output_keys\n\
\n\
# Only relevant for concurrency\n\
# Outcome conditions\n\
string[] cond_outcome\n\
OutcomeCondition[] cond_transition\n\
\n\
# Only relevant for behavior\n\
# Name of the class implementing this state\n\
string behavior_class\n\
\n\
# Only relevant for primitive state\n\
# List of parameter names and values of this state\n\
# Order of names and values has to match\n\
string[] parameter_names\n\
string[] parameter_values\n\
\n\
\n\
\n\
# Position of this state in the editor [x,y]\n\
float32[2] position\n\
\n\
# Outcomes of this state\n\
# Defines the order of the lists: transitions, autonomy\n\
string[] outcomes\n\
# Transition targets (state names or container outcomes) of the outcomes\n\
string[] transitions\n\
# Required autonomy level of the outcomes\n\
int8[] autonomy\n\
\n\
# Userdata of this state\n\
# Merges own input_keys and output_keys, no duplicates\n\
string[] userdata_keys\n\
# Remapping of the corresponding own key (= key used by container)\n\
string[] userdata_remapping\n\
================================================================================\n\
MSG: flexbe_msgs/OutcomeCondition\n\
# Defines a conjunction of required state outcomes in order to return a concurrency outcome\n\
string[] state_name\n\
string[] state_outcome\n\
";
  }

  static const char* value(const ::flexbe_msgs::BehaviorSynthesisActionResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::flexbe_msgs::BehaviorSynthesisActionResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.status);
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BehaviorSynthesisActionResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::flexbe_msgs::BehaviorSynthesisActionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::flexbe_msgs::BehaviorSynthesisActionResult_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "status: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.status);
    s << indent << "result: ";
    s << std::endl;
    Printer< ::flexbe_msgs::BehaviorSynthesisResult_<ContainerAllocator> >::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FLEXBE_MSGS_MESSAGE_BEHAVIORSYNTHESISACTIONRESULT_H
