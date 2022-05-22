// Generated by gencpp from file vrep_common/simRosGetObjectIntParameterResponse.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETOBJECTINTPARAMETERRESPONSE_H
#define VREP_COMMON_MESSAGE_SIMROSGETOBJECTINTPARAMETERRESPONSE_H


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
struct simRosGetObjectIntParameterResponse_
{
  typedef simRosGetObjectIntParameterResponse_<ContainerAllocator> Type;

  simRosGetObjectIntParameterResponse_()
    : result(0)
    , parameterValue(0)  {
    }
  simRosGetObjectIntParameterResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , parameterValue(0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef int32_t _parameterValue_type;
  _parameterValue_type parameterValue;





  typedef boost::shared_ptr< ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator> const> ConstPtr;

}; // struct simRosGetObjectIntParameterResponse_

typedef ::vrep_common::simRosGetObjectIntParameterResponse_<std::allocator<void> > simRosGetObjectIntParameterResponse;

typedef boost::shared_ptr< ::vrep_common::simRosGetObjectIntParameterResponse > simRosGetObjectIntParameterResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetObjectIntParameterResponse const> simRosGetObjectIntParameterResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator1> & lhs, const ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result &&
    lhs.parameterValue == rhs.parameterValue;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator1> & lhs, const ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vrep_common

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6c2f4c807e1ab6d671a7c18b9d47ce4a";
  }

  static const char* value(const ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6c2f4c807e1ab6d6ULL;
  static const uint64_t static_value2 = 0x71a7c18b9d47ce4aULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosGetObjectIntParameterResponse";
  }

  static const char* value(const ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n"
"int32 parameterValue\n"
"\n"
;
  }

  static const char* value(const ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.parameterValue);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosGetObjectIntParameterResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosGetObjectIntParameterResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "parameterValue: ";
    Printer<int32_t>::stream(s, indent + "  ", v.parameterValue);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETOBJECTINTPARAMETERRESPONSE_H
