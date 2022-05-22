// Generated by gencpp from file vrep_common/simRosGetJointMatrixRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETJOINTMATRIXREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSGETJOINTMATRIXREQUEST_H


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
struct simRosGetJointMatrixRequest_
{
  typedef simRosGetJointMatrixRequest_<ContainerAllocator> Type;

  simRosGetJointMatrixRequest_()
    : handle(0)  {
    }
  simRosGetJointMatrixRequest_(const ContainerAllocator& _alloc)
    : handle(0)  {
  (void)_alloc;
    }



   typedef int32_t _handle_type;
  _handle_type handle;





  typedef boost::shared_ptr< ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosGetJointMatrixRequest_

typedef ::vrep_common::simRosGetJointMatrixRequest_<std::allocator<void> > simRosGetJointMatrixRequest;

typedef boost::shared_ptr< ::vrep_common::simRosGetJointMatrixRequest > simRosGetJointMatrixRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetJointMatrixRequest const> simRosGetJointMatrixRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator1> & lhs, const ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator2> & rhs)
{
  return lhs.handle == rhs.handle;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator1> & lhs, const ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vrep_common

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "92535b678299d2bdda959704e78c275e";
  }

  static const char* value(const ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x92535b678299d2bdULL;
  static const uint64_t static_value2 = 0xda959704e78c275eULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosGetJointMatrixRequest";
  }

  static const char* value(const ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n"
"# simInt simGetJointMatrix(simInt objectHandle,simFloat* matrix)\n"
"#\n"
"\n"
"int32 handle\n"
;
  }

  static const char* value(const ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.handle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosGetJointMatrixRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosGetJointMatrixRequest_<ContainerAllocator>& v)
  {
    s << indent << "handle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.handle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETJOINTMATRIXREQUEST_H
