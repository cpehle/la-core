
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_nio_SocketChannelSelectionKeyImpl__
#define __gnu_java_nio_SocketChannelSelectionKeyImpl__

#pragma interface

#include <gnu/java/nio/SelectionKeyImpl.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace nio
      {
          class SelectorImpl;
          class SocketChannelImpl;
          class SocketChannelSelectionKeyImpl;
      }
    }
  }
}

class gnu::java::nio::SocketChannelSelectionKeyImpl : public ::gnu::java::nio::SelectionKeyImpl
{

public:
  SocketChannelSelectionKeyImpl(::gnu::java::nio::SocketChannelImpl *, ::gnu::java::nio::SelectorImpl *);
  virtual jint getNativeFD();
public: // actually package-private
  ::gnu::java::nio::SocketChannelImpl * __attribute__((aligned(__alignof__( ::gnu::java::nio::SelectionKeyImpl)))) ch;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_nio_SocketChannelSelectionKeyImpl__