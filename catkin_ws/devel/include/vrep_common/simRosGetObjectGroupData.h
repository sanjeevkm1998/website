// Generated by gencpp from file vrep_common/simRosGetObjectGroupData.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETOBJECTGROUPDATA_H
#define VREP_COMMON_MESSAGE_SIMROSGETOBJECTGROUPDATA_H

#include <ros/service_traits.h>


#include <vrep_common/simRosGetObjectGroupDataRequest.h>
#include <vrep_common/simRosGetObjectGroupDataResponse.h>


namespace vrep_common
{

struct simRosGetObjectGroupData
{

typedef simRosGetObjectGroupDataRequest Request;
typedef simRosGetObjectGroupDataResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosGetObjectGroupData
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosGetObjectGroupData > {
  static const char* value()
  {
    return "8d0534a840a5e37715f425228506250e";
  }

  static const char* value(const ::vrep_common::simRosGetObjectGroupData&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosGetObjectGroupData > {
  static const char* value()
  {
    return "vrep_common/simRosGetObjectGroupData";
  }

  static const char* value(const ::vrep_common::simRosGetObjectGroupData&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosGetObjectGroupDataRequest> should match
// service_traits::MD5Sum< ::vrep_common::simRosGetObjectGroupData >
template<>
struct MD5Sum< ::vrep_common::simRosGetObjectGroupDataRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosGetObjectGroupData >::value();
  }
  static const char* value(const ::vrep_common::simRosGetObjectGroupDataRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosGetObjectGroupDataRequest> should match
// service_traits::DataType< ::vrep_common::simRosGetObjectGroupData >
template<>
struct DataType< ::vrep_common::simRosGetObjectGroupDataRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosGetObjectGroupData >::value();
  }
  static const char* value(const ::vrep_common::simRosGetObjectGroupDataRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosGetObjectGroupDataResponse> should match
// service_traits::MD5Sum< ::vrep_common::simRosGetObjectGroupData >
template<>
struct MD5Sum< ::vrep_common::simRosGetObjectGroupDataResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosGetObjectGroupData >::value();
  }
  static const char* value(const ::vrep_common::simRosGetObjectGroupDataResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosGetObjectGroupDataResponse> should match
// service_traits::DataType< ::vrep_common::simRosGetObjectGroupData >
template<>
struct DataType< ::vrep_common::simRosGetObjectGroupDataResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosGetObjectGroupData >::value();
  }
  static const char* value(const ::vrep_common::simRosGetObjectGroupDataResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETOBJECTGROUPDATA_H
