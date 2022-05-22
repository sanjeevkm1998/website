// Generated by gencpp from file vrep_common/simRosSetUIButtonLabel.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSSETUIBUTTONLABEL_H
#define VREP_COMMON_MESSAGE_SIMROSSETUIBUTTONLABEL_H

#include <ros/service_traits.h>


#include <vrep_common/simRosSetUIButtonLabelRequest.h>
#include <vrep_common/simRosSetUIButtonLabelResponse.h>


namespace vrep_common
{

struct simRosSetUIButtonLabel
{

typedef simRosSetUIButtonLabelRequest Request;
typedef simRosSetUIButtonLabelResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosSetUIButtonLabel
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosSetUIButtonLabel > {
  static const char* value()
  {
    return "43f15cd21d5f9887f83532420e4a3463";
  }

  static const char* value(const ::vrep_common::simRosSetUIButtonLabel&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosSetUIButtonLabel > {
  static const char* value()
  {
    return "vrep_common/simRosSetUIButtonLabel";
  }

  static const char* value(const ::vrep_common::simRosSetUIButtonLabel&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosSetUIButtonLabelRequest> should match
// service_traits::MD5Sum< ::vrep_common::simRosSetUIButtonLabel >
template<>
struct MD5Sum< ::vrep_common::simRosSetUIButtonLabelRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosSetUIButtonLabel >::value();
  }
  static const char* value(const ::vrep_common::simRosSetUIButtonLabelRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosSetUIButtonLabelRequest> should match
// service_traits::DataType< ::vrep_common::simRosSetUIButtonLabel >
template<>
struct DataType< ::vrep_common::simRosSetUIButtonLabelRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosSetUIButtonLabel >::value();
  }
  static const char* value(const ::vrep_common::simRosSetUIButtonLabelRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosSetUIButtonLabelResponse> should match
// service_traits::MD5Sum< ::vrep_common::simRosSetUIButtonLabel >
template<>
struct MD5Sum< ::vrep_common::simRosSetUIButtonLabelResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosSetUIButtonLabel >::value();
  }
  static const char* value(const ::vrep_common::simRosSetUIButtonLabelResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosSetUIButtonLabelResponse> should match
// service_traits::DataType< ::vrep_common::simRosSetUIButtonLabel >
template<>
struct DataType< ::vrep_common::simRosSetUIButtonLabelResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosSetUIButtonLabel >::value();
  }
  static const char* value(const ::vrep_common::simRosSetUIButtonLabelResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSSETUIBUTTONLABEL_H
