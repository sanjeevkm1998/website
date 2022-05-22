// Generated by gencpp from file vrep_common/simRosAddStatusbarMessageResponse.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSADDSTATUSBARMESSAGERESPONSE_H
#define VREP_COMMON_MESSAGE_SIMROSADDSTATUSBARMESSAGERESPONSE_H


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
struct simRosAddStatusbarMessageResponse_
{
  typedef simRosAddStatusbarMessageResponse_<ContainerAllocator> Type;

  simRosAddStatusbarMessageResponse_()
    : result(0)  {
    }
  simRosAddStatusbarMessageResponse_(const ContainerAllocator& _alloc)
    : result(0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator> const> ConstPtr;

}; // struct simRosAddStatusbarMessageResponse_

typedef ::vrep_common::simRosAddStatusbarMessageResponse_<std::allocator<void> > simRosAddStatusbarMessageResponse;

typedef boost::shared_ptr< ::vrep_common::simRosAddStatusbarMessageResponse > simRosAddStatusbarMessageResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosAddStatusbarMessageResponse const> simRosAddStatusbarMessageResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator1> & lhs, const ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator1> & lhs, const ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vrep_common

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x034a8e20d6a30666ULL;
  static const uint64_t static_value2 = 0x5e3a5b340fab3f09ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosAddStatusbarMessageResponse";
  }

  static const char* value(const ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n"
"\n"
"\n"
;
  }

  static const char* value(const ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosAddStatusbarMessageResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosAddStatusbarMessageResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSADDSTATUSBARMESSAGERESPONSE_H
