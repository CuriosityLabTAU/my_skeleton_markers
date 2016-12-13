// Generated by gencpp from file my_skeleton_markers/Skeleton.msg
// DO NOT EDIT!


#ifndef MY_SKELETON_MARKERS_MESSAGE_SKELETON_H
#define MY_SKELETON_MARKERS_MESSAGE_SKELETON_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Quaternion.h>

namespace my_skeleton_markers
{
template <class ContainerAllocator>
struct Skeleton_
{
  typedef Skeleton_<ContainerAllocator> Type;

  Skeleton_()
    : header()
    , user_id(0)
    , name()
    , confidence()
    , position()
    , orientation()  {
    }
  Skeleton_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , user_id(0)
    , name(_alloc)
    , confidence(_alloc)
    , position(_alloc)
    , orientation(_alloc)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _user_id_type;
  _user_id_type user_id;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _name_type;
  _name_type name;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _confidence_type;
  _confidence_type confidence;

   typedef std::vector< ::geometry_msgs::Vector3_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Vector3_<ContainerAllocator> >::other >  _position_type;
  _position_type position;

   typedef std::vector< ::geometry_msgs::Quaternion_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Quaternion_<ContainerAllocator> >::other >  _orientation_type;
  _orientation_type orientation;




  typedef boost::shared_ptr< ::my_skeleton_markers::Skeleton_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_skeleton_markers::Skeleton_<ContainerAllocator> const> ConstPtr;

}; // struct Skeleton_

typedef ::my_skeleton_markers::Skeleton_<std::allocator<void> > Skeleton;

typedef boost::shared_ptr< ::my_skeleton_markers::Skeleton > SkeletonPtr;
typedef boost::shared_ptr< ::my_skeleton_markers::Skeleton const> SkeletonConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_skeleton_markers::Skeleton_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_skeleton_markers::Skeleton_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace my_skeleton_markers

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'my_skeleton_markers': ['/home/gorengordon/catkin_ws/src/my_skeleton_markers/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::my_skeleton_markers::Skeleton_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_skeleton_markers::Skeleton_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_skeleton_markers::Skeleton_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_skeleton_markers::Skeleton_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_skeleton_markers::Skeleton_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_skeleton_markers::Skeleton_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_skeleton_markers::Skeleton_<ContainerAllocator> >
{
  static const char* value()
  {
    return "34722af981b6a61700ff31df5a97c2e0";
  }

  static const char* value(const ::my_skeleton_markers::Skeleton_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x34722af981b6a617ULL;
  static const uint64_t static_value2 = 0x00ff31df5a97c2e0ULL;
};

template<class ContainerAllocator>
struct DataType< ::my_skeleton_markers::Skeleton_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_skeleton_markers/Skeleton";
  }

  static const char* value(const ::my_skeleton_markers::Skeleton_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_skeleton_markers::Skeleton_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int32 user_id\n\
string[] name\n\
float32[] confidence\n\
geometry_msgs/Vector3[] position\n\
geometry_msgs/Quaternion[] orientation\n\
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
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::my_skeleton_markers::Skeleton_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_skeleton_markers::Skeleton_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.user_id);
      stream.next(m.name);
      stream.next(m.confidence);
      stream.next(m.position);
      stream.next(m.orientation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Skeleton_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_skeleton_markers::Skeleton_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_skeleton_markers::Skeleton_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "user_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.user_id);
    s << indent << "name[]" << std::endl;
    for (size_t i = 0; i < v.name.size(); ++i)
    {
      s << indent << "  name[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name[i]);
    }
    s << indent << "confidence[]" << std::endl;
    for (size_t i = 0; i < v.confidence.size(); ++i)
    {
      s << indent << "  confidence[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.confidence[i]);
    }
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "    ", v.position[i]);
    }
    s << indent << "orientation[]" << std::endl;
    for (size_t i = 0; i < v.orientation.size(); ++i)
    {
      s << indent << "  orientation[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "    ", v.orientation[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_SKELETON_MARKERS_MESSAGE_SKELETON_H
