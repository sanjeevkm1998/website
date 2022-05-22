// Generated by gencpp from file vrep_common/simRosGetUIHandleRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETUIHANDLEREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSGETUIHANDLEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vrep_common
{
template <class ContainerAllocator>
struct simRosGetUIHandleRequest_
{
  typedef simRosGetUIHandleRequest_<ContainerAllocator> Type;

  simRosGetUIHandleRequest_()
    : uiName()  {
    }
  simRosGetUIHandleRequest_(const ContainerAllocator& _alloc)
    : uiName(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _uiName_type;
  _uiName_type uiName;





  typedef boost::shared_ptr< ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosGetUIHandleRequest_

typedef ::vrep_common::simRosGetUIHandleRequest_<std::allocator<void> > simRosGetUIHandleRequest;

typedef boost::shared_ptr< ::vrep_common::simRosGetUIHandleRequest > simRosGetUIHandleRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetUIHandleRequest const> simRosGetUIHandleRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator1> & lhs, const ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator2> & rhs)
{
  return lhs.uiName == rhs.uiName;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator1> & lhs, const ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vrep_common

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7f8e94c02f5baf20211b30f44081098c";
  }

  static const char* value(const ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7f8e94c02f5baf20ULL;
  static const uint64_t static_value2 = 0x211b30f44081098cULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosGetUIHandleRequest";
  }

  static const char* value(const ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n"
"# simInt simGetUIHandle(const simChar* uiName)\n"
"#\n"
"\n"
"string uiName\n"
;
  }

  static const char* value(const ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.uiName);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosGetUIHandleRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosGetUIHandleRequest_<ContainerAllocator>& v)
  {
    s << indent << "uiName: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.uiName);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETUIHANDLEREQUEST_H
