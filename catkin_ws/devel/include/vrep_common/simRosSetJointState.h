// Generated by gencpp from file vrep_common/simRosSetJointState.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSSETJOINTSTATE_H
#define VREP_COMMON_MESSAGE_SIMROSSETJOINTSTATE_H

#include <ros/service_traits.h>


#include <vrep_common/simRosSetJointStateRequest.h>
#include <vrep_common/simRosSetJointStateResponse.h>


namespace vrep_common
{

struct simRosSetJointState
{

typedef simRosSetJointStateRequest Request;
typedef simRosSetJointStateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosSetJointState
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosSetJointState > {
  static const char* value()
  {
    return "f0dcb80e3d9c4b8b983ca341425c1996";
  }

  static const char* value(const ::vrep_common::simRosSetJointState&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosSetJointState > {
  static const char* value()
  {
    return "vrep_common/simRosSetJointState";
  }

  static const char* value(const ::vrep_common::simRosSetJointState&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosSetJointStateRequest> should match
// service_traits::MD5Sum< ::vrep_common::simRosSetJointState >
template<>
struct MD5Sum< ::vrep_common::simRosSetJointStateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosSetJointState >::value();
  }
  static const char* value(const ::vrep_common::simRosSetJointStateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosSetJointStateRequest> should match
// service_traits::DataType< ::vrep_common::simRosSetJointState >
template<>
struct DataType< ::vrep_common::simRosSetJointStateRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosSetJointState >::value();
  }
  static const char* value(const ::vrep_common::simRosSetJointStateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosSetJointStateResponse> should match
// service_traits::MD5Sum< ::vrep_common::simRosSetJointState >
template<>
struct MD5Sum< ::vrep_common::simRosSetJointStateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosSetJointState >::value();
  }
  static const char* value(const ::vrep_common::simRosSetJointStateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosSetJointStateResponse> should match
// service_traits::DataType< ::vrep_common::simRosSetJointState >
template<>
struct DataType< ::vrep_common::simRosSetJointStateResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosSetJointState >::value();
  }
  static const char* value(const ::vrep_common::simRosSetJointStateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSSETJOINTSTATE_H
