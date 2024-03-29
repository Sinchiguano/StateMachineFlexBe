// Generated by gencpp from file flexbe_msgs/UICommand.msg
// DO NOT EDIT!


#ifndef FLEXBE_MSGS_MESSAGE_UICOMMAND_H
#define FLEXBE_MSGS_MESSAGE_UICOMMAND_H


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
struct UICommand_
{
  typedef UICommand_<ContainerAllocator> Type;

  UICommand_()
    : command()
    , key()  {
    }
  UICommand_(const ContainerAllocator& _alloc)
    : command(_alloc)
    , key(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  _command_type command;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _key_type;
  _key_type key;





  typedef boost::shared_ptr< ::flexbe_msgs::UICommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::flexbe_msgs::UICommand_<ContainerAllocator> const> ConstPtr;

}; // struct UICommand_

typedef ::flexbe_msgs::UICommand_<std::allocator<void> > UICommand;

typedef boost::shared_ptr< ::flexbe_msgs::UICommand > UICommandPtr;
typedef boost::shared_ptr< ::flexbe_msgs::UICommand const> UICommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::flexbe_msgs::UICommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::flexbe_msgs::UICommand_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::flexbe_msgs::UICommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::flexbe_msgs::UICommand_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::flexbe_msgs::UICommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::flexbe_msgs::UICommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flexbe_msgs::UICommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flexbe_msgs::UICommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::flexbe_msgs::UICommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "88f45469138737816fa9cd59fbf3c084";
  }

  static const char* value(const ::flexbe_msgs::UICommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x88f4546913873781ULL;
  static const uint64_t static_value2 = 0x6fa9cd59fbf3c084ULL;
};

template<class ContainerAllocator>
struct DataType< ::flexbe_msgs::UICommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "flexbe_msgs/UICommand";
  }

  static const char* value(const ::flexbe_msgs::UICommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::flexbe_msgs::UICommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Sends a command to the command interface of the FlexBE UI.\n\
# In order to be successfully executed, the user needs to have ROS commands enabled and the keys have to match.\n\
\n\
# Command to be executed as it would be entered in the command interface\n\
string command\n\
\n\
# Security key, needs to match the key set in the UI\n\
string key\n\
";
  }

  static const char* value(const ::flexbe_msgs::UICommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::flexbe_msgs::UICommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
      stream.next(m.key);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UICommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::flexbe_msgs::UICommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::flexbe_msgs::UICommand_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.command);
    s << indent << "key: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.key);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FLEXBE_MSGS_MESSAGE_UICOMMAND_H
