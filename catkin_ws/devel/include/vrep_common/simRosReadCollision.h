// Generated by gencpp from file vrep_common/simRosReadCollision.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSREADCOLLISION_H
#define VREP_COMMON_MESSAGE_SIMROSREADCOLLISION_H

#include <ros/service_traits.h>


#include <vrep_common/simRosReadCollisionRequest.h>
#include <vrep_common/simRosReadCollisionResponse.h>


namespace vrep_common
{

struct simRosReadCollision
{

typedef simRosReadCollisionRequest Request;
typedef simRosReadCollisionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosReadCollision
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosReadCollision > {
  static const char* value()
  {
    return "37515f25a62d19573a6222165e612868";
  }

  static const char* value(const ::vrep_common::simRosReadCollision&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosReadCollision > {
  static const char* value()
  {
    return "vrep_common/simRosReadCollision";
  }

  static const char* value(const ::vrep_common::simRosReadCollision&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosReadCollisionRequest> should match
// service_traits::MD5Sum< ::vrep_common::simRosReadCollision >
template<>
struct MD5Sum< ::vrep_common::simRosReadCollisionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosReadCollision >::value();
  }
  static const char* value(const ::vrep_common::simRosReadCollisionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosReadCollisionRequest> should match
// service_traits::DataType< ::vrep_common::simRosReadCollision >
template<>
struct DataType< ::vrep_common::simRosReadCollisionRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosReadCollision >::value();
  }
  static const char* value(const ::vrep_common::simRosReadCollisionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosReadCollisionResponse> should match
// service_traits::MD5Sum< ::vrep_common::simRosReadCollision >
template<>
struct MD5Sum< ::vrep_common::simRosReadCollisionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosReadCollision >::value();
  }
  static const char* value(const ::vrep_common::simRosReadCollisionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosReadCollisionResponse> should match
// service_traits::DataType< ::vrep_common::simRosReadCollision >
template<>
struct DataType< ::vrep_common::simRosReadCollisionResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosReadCollision >::value();
  }
  static const char* value(const ::vrep_common::simRosReadCollisionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSREADCOLLISION_H
