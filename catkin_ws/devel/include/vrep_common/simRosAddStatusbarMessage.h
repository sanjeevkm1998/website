// Generated by gencpp from file vrep_common/simRosAddStatusbarMessage.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSADDSTATUSBARMESSAGE_H
#define VREP_COMMON_MESSAGE_SIMROSADDSTATUSBARMESSAGE_H

#include <ros/service_traits.h>


#include <vrep_common/simRosAddStatusbarMessageRequest.h>
#include <vrep_common/simRosAddStatusbarMessageResponse.h>


namespace vrep_common
{

struct simRosAddStatusbarMessage
{

typedef simRosAddStatusbarMessageRequest Request;
typedef simRosAddStatusbarMessageResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosAddStatusbarMessage
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosAddStatusbarMessage > {
  static const char* value()
  {
    return "e9096ed5f063e7da83fbcb7332c6a56b";
  }

  static const char* value(const ::vrep_common::simRosAddStatusbarMessage&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosAddStatusbarMessage > {
  static const char* value()
  {
    return "vrep_common/simRosAddStatusbarMessage";
  }

  static const char* value(const ::vrep_common::simRosAddStatusbarMessage&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosAddStatusbarMessageRequest> should match
// service_traits::MD5Sum< ::vrep_common::simRosAddStatusbarMessage >
template<>
struct MD5Sum< ::vrep_common::simRosAddStatusbarMessageRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosAddStatusbarMessage >::value();
  }
  static const char* value(const ::vrep_common::simRosAddStatusbarMessageRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosAddStatusbarMessageRequest> should match
// service_traits::DataType< ::vrep_common::simRosAddStatusbarMessage >
template<>
struct DataType< ::vrep_common::simRosAddStatusbarMessageRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosAddStatusbarMessage >::value();
  }
  static const char* value(const ::vrep_common::simRosAddStatusbarMessageRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosAddStatusbarMessageResponse> should match
// service_traits::MD5Sum< ::vrep_common::simRosAddStatusbarMessage >
template<>
struct MD5Sum< ::vrep_common::simRosAddStatusbarMessageResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosAddStatusbarMessage >::value();
  }
  static const char* value(const ::vrep_common::simRosAddStatusbarMessageResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosAddStatusbarMessageResponse> should match
// service_traits::DataType< ::vrep_common::simRosAddStatusbarMessage >
template<>
struct DataType< ::vrep_common::simRosAddStatusbarMessageResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosAddStatusbarMessage >::value();
  }
  static const char* value(const ::vrep_common::simRosAddStatusbarMessageResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSADDSTATUSBARMESSAGE_H
