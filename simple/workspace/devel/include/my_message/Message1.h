// Generated by gencpp from file my_message/Message1.msg
// DO NOT EDIT!


#ifndef MY_MESSAGE_MESSAGE_MESSAGE1_H
#define MY_MESSAGE_MESSAGE_MESSAGE1_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace my_message
{
template <class ContainerAllocator>
struct Message1_
{
  typedef Message1_<ContainerAllocator> Type;

  Message1_()
    : text()
    , number(0)  {
    }
  Message1_(const ContainerAllocator& _alloc)
    : text(_alloc)
    , number(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _text_type;
  _text_type text;

   typedef int32_t _number_type;
  _number_type number;





  typedef boost::shared_ptr< ::my_message::Message1_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_message::Message1_<ContainerAllocator> const> ConstPtr;

}; // struct Message1_

typedef ::my_message::Message1_<std::allocator<void> > Message1;

typedef boost::shared_ptr< ::my_message::Message1 > Message1Ptr;
typedef boost::shared_ptr< ::my_message::Message1 const> Message1ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_message::Message1_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_message::Message1_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::my_message::Message1_<ContainerAllocator1> & lhs, const ::my_message::Message1_<ContainerAllocator2> & rhs)
{
  return lhs.text == rhs.text &&
    lhs.number == rhs.number;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::my_message::Message1_<ContainerAllocator1> & lhs, const ::my_message::Message1_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace my_message

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::my_message::Message1_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_message::Message1_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_message::Message1_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_message::Message1_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_message::Message1_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_message::Message1_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_message::Message1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6ae3591edb22917b11846d84bc548557";
  }

  static const char* value(const ::my_message::Message1_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6ae3591edb22917bULL;
  static const uint64_t static_value2 = 0x11846d84bc548557ULL;
};

template<class ContainerAllocator>
struct DataType< ::my_message::Message1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_message/Message1";
  }

  static const char* value(const ::my_message::Message1_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_message::Message1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string text\n"
"int32 number\n"
;
  }

  static const char* value(const ::my_message::Message1_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_message::Message1_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.text);
      stream.next(m.number);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Message1_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_message::Message1_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_message::Message1_<ContainerAllocator>& v)
  {
    s << indent << "text: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.text);
    s << indent << "number: ";
    Printer<int32_t>::stream(s, indent + "  ", v.number);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_MESSAGE_MESSAGE_MESSAGE1_H
