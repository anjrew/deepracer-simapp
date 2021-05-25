// Generated by gencpp from file deepracer_msgs/GetModelStatesResponse.msg
// DO NOT EDIT!


#ifndef DEEPRACER_MSGS_MESSAGE_GETMODELSTATESRESPONSE_H
#define DEEPRACER_MSGS_MESSAGE_GETMODELSTATESRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <gazebo_msgs/ModelState.h>

namespace deepracer_msgs
{
template <class ContainerAllocator>
struct GetModelStatesResponse_
{
  typedef GetModelStatesResponse_<ContainerAllocator> Type;

  GetModelStatesResponse_()
    : model_states()
    , success(false)
    , status_message()
    , status()
    , messages()  {
    }
  GetModelStatesResponse_(const ContainerAllocator& _alloc)
    : model_states(_alloc)
    , success(false)
    , status_message(_alloc)
    , status(_alloc)
    , messages(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::gazebo_msgs::ModelState_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::gazebo_msgs::ModelState_<ContainerAllocator> >::other >  _model_states_type;
  _model_states_type model_states;

   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_message_type;
  _status_message_type status_message;

   typedef std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  _status_type;
  _status_type status;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _messages_type;
  _messages_type messages;





  typedef boost::shared_ptr< ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetModelStatesResponse_

typedef ::deepracer_msgs::GetModelStatesResponse_<std::allocator<void> > GetModelStatesResponse;

typedef boost::shared_ptr< ::deepracer_msgs::GetModelStatesResponse > GetModelStatesResponsePtr;
typedef boost::shared_ptr< ::deepracer_msgs::GetModelStatesResponse const> GetModelStatesResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator1> & lhs, const ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator2> & rhs)
{
  return lhs.model_states == rhs.model_states &&
    lhs.success == rhs.success &&
    lhs.status_message == rhs.status_message &&
    lhs.status == rhs.status &&
    lhs.messages == rhs.messages;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator1> & lhs, const ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace deepracer_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1d116e933124d536050bdc100783f312";
  }

  static const char* value(const ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1d116e933124d536ULL;
  static const uint64_t static_value2 = 0x050bdc100783f312ULL;
};

template<class ContainerAllocator>
struct DataType< ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "deepracer_msgs/GetModelStatesResponse";
  }

  static const char* value(const ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_msgs/ModelState[] model_states\n"
"bool success                         # return true if get successful\n"
"string status_message                # comments if available\n"
"int8[] status                        # status of each request: true if succeeded otherwise false\n"
"string[] messages\n"
"\n"
"================================================================================\n"
"MSG: gazebo_msgs/ModelState\n"
"# Set Gazebo Model pose and twist\n"
"string model_name           # model to set state (pose and twist)\n"
"geometry_msgs/Pose pose     # desired pose in reference frame\n"
"geometry_msgs/Twist twist   # desired twist in reference frame\n"
"string reference_frame      # set pose/twist relative to the frame of this entity (Body/Model)\n"
"                            # leave empty or \"world\" or \"map\" defaults to world-frame\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.model_states);
      stream.next(m.success);
      stream.next(m.status_message);
      stream.next(m.status);
      stream.next(m.messages);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetModelStatesResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::deepracer_msgs::GetModelStatesResponse_<ContainerAllocator>& v)
  {
    s << indent << "model_states[]" << std::endl;
    for (size_t i = 0; i < v.model_states.size(); ++i)
    {
      s << indent << "  model_states[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::gazebo_msgs::ModelState_<ContainerAllocator> >::stream(s, indent + "    ", v.model_states[i]);
    }
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "status_message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status_message);
    s << indent << "status[]" << std::endl;
    for (size_t i = 0; i < v.status.size(); ++i)
    {
      s << indent << "  status[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.status[i]);
    }
    s << indent << "messages[]" << std::endl;
    for (size_t i = 0; i < v.messages.size(); ++i)
    {
      s << indent << "  messages[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.messages[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DEEPRACER_MSGS_MESSAGE_GETMODELSTATESRESPONSE_H