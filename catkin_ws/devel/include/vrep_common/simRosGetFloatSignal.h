// Generated by gencpp from file vrep_common/simRosGetFloatSignal.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETFLOATSIGNAL_H
#define VREP_COMMON_MESSAGE_SIMROSGETFLOATSIGNAL_H

#include <ros/service_traits.h>


#include <vrep_common/simRosGetFloatSignalRequest.h>
#include <vrep_common/simRosGetFloatSignalResponse.h>


namespace vrep_common
{

struct simRosGetFloatSignal
{

typedef simRosGetFloatSignalRequest Request;
typedef simRosGetFloatSignalResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosGetFloatSignal
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosGetFloatSignal > {
  static const char* value()
  {
    return "52ba64366a10126c502d44acd3f25e3a";
  }

  static const char* value(const ::vrep_common::simRosGetFloatSignal&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosGetFloatSignal > {
  static const char* value()
  {
    return "vrep_common/simRosGetFloatSignal";
  }

  static const char* value(const ::vrep_common::simRosGetFloatSignal&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosGetFloatSignalRequest> should match
// service_traits::MD5Sum< ::vrep_common::simRosGetFloatSignal >
template<>
struct MD5Sum< ::vrep_common::simRosGetFloatSignalRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosGetFloatSignal >::value();
  }
  static const char* value(const ::vrep_common::simRosGetFloatSignalRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosGetFloatSignalRequest> should match
// service_traits::DataType< ::vrep_common::simRosGetFloatSignal >
template<>
struct DataType< ::vrep_common::simRosGetFloatSignalRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosGetFloatSignal >::value();
  }
  static const char* value(const ::vrep_common::simRosGetFloatSignalRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosGetFloatSignalResponse> should match
// service_traits::MD5Sum< ::vrep_common::simRosGetFloatSignal >
template<>
struct MD5Sum< ::vrep_common::simRosGetFloatSignalResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosGetFloatSignal >::value();
  }
  static const char* value(const ::vrep_common::simRosGetFloatSignalResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosGetFloatSignalResponse> should match
// service_traits::DataType< ::vrep_common::simRosGetFloatSignal >
template<>
struct DataType< ::vrep_common::simRosGetFloatSignalResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosGetFloatSignal >::value();
  }
  static const char* value(const ::vrep_common::simRosGetFloatSignalResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETFLOATSIGNAL_H
