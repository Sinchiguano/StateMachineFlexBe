// Generated by gencpp from file flexbe_msgs/BehaviorInputResult.msg
// DO NOT EDIT!


#ifndef FLEXBE_MSGS_MESSAGE_BEHAVIORINPUTRESULT_H
#define FLEXBE_MSGS_MESSAGE_BEHAVIORINPUTRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace flexbe_msgs
{
template <class ContainerAllocator>
struct BehaviorInputResult_
{
  typedef BehaviorInputResult_<ContainerAllocator> Type;

  BehaviorInputResult_()
    : result_code(0)
    , data()  {
    }
  BehaviorInputResult_(const ContainerAllocator& _alloc)
    : result_code(0)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _result_code_type;
  _result_code_type result_code;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _data_type;
  _data_type data;



  enum {
    RESULT_OK = 0u,
    RESULT_FAILED = 1u,
    RESULT_ABORTED = 2u,
  };


  typedef boost::shared_ptr< ::flexbe_msgs::BehaviorInputResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::flexbe_msgs::BehaviorInputResult_<ContainerAllocator> const> ConstPtr;

}; // struct BehaviorInputResult_

typedef ::flexbe_msgs::BehaviorInputResult_<std::allocator<void> > BehaviorInputResult;

typedef boost::shared_ptr< ::flexbe_msgs::BehaviorInputResult > BehaviorInputResultPtr;
typedef boost::shared_ptr< ::flexbe_msgs::BehaviorInputResult const> BehaviorInputResultConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::flexbe_msgs::BehaviorInputResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::flexbe_msgs::BehaviorInputResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace flexbe_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'flexbe_msgs': ['/home/casch/catkin_ws/src/flexbe_behavior_engine/flexbe_msgs/msg', '/home/casch/catkin_ws/devel/share/flexbe_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::flexbe_msgs::BehaviorInputResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::flexbe_msgs::BehaviorInputResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::flexbe_msgs::BehaviorInputResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::flexbe_msgs::BehaviorInputResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flexbe_msgs::BehaviorInputResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flexbe_msgs::BehaviorInputResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::flexbe_msgs::BehaviorInputResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e0509f159e7c7bb2268efbc625f63b3f";
  }

  static const char* value(const ::flexbe_msgs::BehaviorInputResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe0509f159e7c7bb2ULL;
  static const uint64_t static_value2 = 0x268efbc625f63b3fULL;
};

template<class ContainerAllocator>
struct DataType< ::flexbe_msgs::BehaviorInputResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "flexbe_msgs/BehaviorInputResult";
  }

  static const char* value(const ::flexbe_msgs::BehaviorInputResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::flexbe_msgs::BehaviorInputResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
uint8 RESULT_OK 		= 0\n\
uint8 RESULT_FAILED		= 1\n\
uint8 RESULT_ABORTED	= 2\n\
\n\
# Indicates if the request has been successful\n\
uint8 result_code\n\
\n\
# Serialized data which was requested\n\
# In case of result_code != RESULT_OK, this field will contain unserialized data regarding the reason of failure instead.\n\
string data\n\
\n\
";
  }

  static const char* value(const ::flexbe_msgs::BehaviorInputResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::flexbe_msgs::BehaviorInputResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result_code);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BehaviorInputResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::flexbe_msgs::BehaviorInputResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::flexbe_msgs::BehaviorInputResult_<ContainerAllocator>& v)
  {
    s << indent << "result_code: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result_code);
    s << indent << "data: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FLEXBE_MSGS_MESSAGE_BEHAVIORINPUTRESULT_H
