// Generated by gencpp from file vrep_common/simRosCloseSceneRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSCLOSESCENEREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSCLOSESCENEREQUEST_H


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
struct simRosCloseSceneRequest_
{
  typedef simRosCloseSceneRequest_<ContainerAllocator> Type;

  simRosCloseSceneRequest_()
    {
    }
  simRosCloseSceneRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::vrep_common::simRosCloseSceneRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosCloseSceneRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosCloseSceneRequest_

typedef ::vrep_common::simRosCloseSceneRequest_<std::allocator<void> > simRosCloseSceneRequest;

typedef boost::shared_ptr< ::vrep_common::simRosCloseSceneRequest > simRosCloseSceneRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosCloseSceneRequest const> simRosCloseSceneRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosCloseSceneRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosCloseSceneRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace vrep_common

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosCloseSceneRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosCloseSceneRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosCloseSceneRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosCloseSceneRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosCloseSceneRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosCloseSceneRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosCloseSceneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::vrep_common::simRosCloseSceneRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosCloseSceneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosCloseSceneRequest";
  }

  static const char* value(const ::vrep_common::simRosCloseSceneRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosCloseSceneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n"
"# simInt simCloseScene()\n"
"#\n"
"\n"
;
  }

  static const char* value(const ::vrep_common::simRosCloseSceneRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosCloseSceneRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosCloseSceneRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosCloseSceneRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::vrep_common::simRosCloseSceneRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSCLOSESCENEREQUEST_H
