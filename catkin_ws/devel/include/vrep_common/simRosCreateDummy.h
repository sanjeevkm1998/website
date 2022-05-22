// Generated by gencpp from file vrep_common/simRosCreateDummy.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSCREATEDUMMY_H
#define VREP_COMMON_MESSAGE_SIMROSCREATEDUMMY_H

#include <ros/service_traits.h>


#include <vrep_common/simRosCreateDummyRequest.h>
#include <vrep_common/simRosCreateDummyResponse.h>


namespace vrep_common
{

struct simRosCreateDummy
{

typedef simRosCreateDummyRequest Request;
typedef simRosCreateDummyResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosCreateDummy
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosCreateDummy > {
  static const char* value()
  {
    return "ca160749088e63e26f75d439232c561a";
  }

  static const char* value(const ::vrep_common::simRosCreateDummy&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosCreateDummy > {
  static const char* value()
  {
    return "vrep_common/simRosCreateDummy";
  }

  static const char* value(const ::vrep_common::simRosCreateDummy&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosCreateDummyRequest> should match
// service_traits::MD5Sum< ::vrep_common::simRosCreateDummy >
template<>
struct MD5Sum< ::vrep_common::simRosCreateDummyRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosCreateDummy >::value();
  }
  static const char* value(const ::vrep_common::simRosCreateDummyRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosCreateDummyRequest> should match
// service_traits::DataType< ::vrep_common::simRosCreateDummy >
template<>
struct DataType< ::vrep_common::simRosCreateDummyRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosCreateDummy >::value();
  }
  static const char* value(const ::vrep_common::simRosCreateDummyRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosCreateDummyResponse> should match
// service_traits::MD5Sum< ::vrep_common::simRosCreateDummy >
template<>
struct MD5Sum< ::vrep_common::simRosCreateDummyResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosCreateDummy >::value();
  }
  static const char* value(const ::vrep_common::simRosCreateDummyResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosCreateDummyResponse> should match
// service_traits::DataType< ::vrep_common::simRosCreateDummy >
template<>
struct DataType< ::vrep_common::simRosCreateDummyResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosCreateDummy >::value();
  }
  static const char* value(const ::vrep_common::simRosCreateDummyResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSCREATEDUMMY_H
