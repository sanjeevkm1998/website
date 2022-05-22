// Generated by gencpp from file vrep_common/simRosDisablePublisher.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSDISABLEPUBLISHER_H
#define VREP_COMMON_MESSAGE_SIMROSDISABLEPUBLISHER_H

#include <ros/service_traits.h>


#include <vrep_common/simRosDisablePublisherRequest.h>
#include <vrep_common/simRosDisablePublisherResponse.h>


namespace vrep_common
{

struct simRosDisablePublisher
{

typedef simRosDisablePublisherRequest Request;
typedef simRosDisablePublisherResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosDisablePublisher
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosDisablePublisher > {
  static const char* value()
  {
    return "468250467bc8406ae24bdf79d4391996";
  }

  static const char* value(const ::vrep_common::simRosDisablePublisher&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosDisablePublisher > {
  static const char* value()
  {
    return "vrep_common/simRosDisablePublisher";
  }

  static const char* value(const ::vrep_common::simRosDisablePublisher&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosDisablePublisherRequest> should match
// service_traits::MD5Sum< ::vrep_common::simRosDisablePublisher >
template<>
struct MD5Sum< ::vrep_common::simRosDisablePublisherRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosDisablePublisher >::value();
  }
  static const char* value(const ::vrep_common::simRosDisablePublisherRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosDisablePublisherRequest> should match
// service_traits::DataType< ::vrep_common::simRosDisablePublisher >
template<>
struct DataType< ::vrep_common::simRosDisablePublisherRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosDisablePublisher >::value();
  }
  static const char* value(const ::vrep_common::simRosDisablePublisherRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosDisablePublisherResponse> should match
// service_traits::MD5Sum< ::vrep_common::simRosDisablePublisher >
template<>
struct MD5Sum< ::vrep_common::simRosDisablePublisherResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosDisablePublisher >::value();
  }
  static const char* value(const ::vrep_common::simRosDisablePublisherResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosDisablePublisherResponse> should match
// service_traits::DataType< ::vrep_common::simRosDisablePublisher >
template<>
struct DataType< ::vrep_common::simRosDisablePublisherResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosDisablePublisher >::value();
  }
  static const char* value(const ::vrep_common::simRosDisablePublisherResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSDISABLEPUBLISHER_H
