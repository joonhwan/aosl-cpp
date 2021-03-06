// Copyright (C) 2005-2010 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema
// to C++ data binding compiler, in the Proprietary License mode.
// You should have received a proprietary license from Code Synthesis
// Tools CC prior to generating this code. See the license text for
// conditions.
//

#ifndef AOSLCPP_AOSL__PROPERTIES_STREAM_OBJECT_INL
#define AOSLCPP_AOSL__PROPERTIES_STREAM_OBJECT_INL

// Begin prologue.
//
//
// End prologue.

#include "aosl/unit_stream.hpp"
#include "aosl/unit_stream.inl"

#include "aosl/unit_time.hpp"
#include "aosl/unit_time.inl"

#include "aosl/controller.hpp"
#include "aosl/controller.inl"

#include "aosl/activation.hpp"
#include "aosl/activation.inl"

namespace aosl
{
  // Properties_stream_object
  // 

  inline
  const Properties_stream_object::BeginType& Properties_stream_object::
  begin () const
  {
    return this->begin_.get ();
  }

  inline
  Properties_stream_object::BeginType& Properties_stream_object::
  begin ()
  {
    return this->begin_.get ();
  }

  inline
  void Properties_stream_object::
  begin (const BeginType& x)
  {
    this->begin_.set (x);
  }

  inline
  void Properties_stream_object::
  begin (::std::auto_ptr< BeginType > x)
  {
    this->begin_.set (x);
  }

  inline
  ::std::auto_ptr< Properties_stream_object::BeginType > Properties_stream_object::
  detach_begin ()
  {
    return this->begin_.detach ();
  }

  inline
  const Properties_stream_object::BeginType& Properties_stream_object::
  begin_default_value ()
  {
    return begin_default_value_;
  }

  inline
  const Properties_stream_object::EndType& Properties_stream_object::
  end () const
  {
    return this->end_.get ();
  }

  inline
  Properties_stream_object::EndType& Properties_stream_object::
  end ()
  {
    return this->end_.get ();
  }

  inline
  void Properties_stream_object::
  end (const EndType& x)
  {
    this->end_.set (x);
  }

  inline
  void Properties_stream_object::
  end (::std::auto_ptr< EndType > x)
  {
    this->end_.set (x);
  }

  inline
  ::std::auto_ptr< Properties_stream_object::EndType > Properties_stream_object::
  detach_end ()
  {
    return this->end_.detach ();
  }

  inline
  const Properties_stream_object::EndType& Properties_stream_object::
  end_default_value ()
  {
    return end_default_value_;
  }

  inline
  const Properties_stream_object::LoopType& Properties_stream_object::
  loop () const
  {
    return this->loop_.get ();
  }

  inline
  Properties_stream_object::LoopType& Properties_stream_object::
  loop ()
  {
    return this->loop_.get ();
  }

  inline
  void Properties_stream_object::
  loop (const LoopType& x)
  {
    this->loop_.set (x);
  }

  inline
  Properties_stream_object::LoopType Properties_stream_object::
  loop_default_value ()
  {
    return LoopType (false);
  }

  inline
  const Properties_stream_object::IntervalType& Properties_stream_object::
  interval () const
  {
    return this->interval_.get ();
  }

  inline
  Properties_stream_object::IntervalType& Properties_stream_object::
  interval ()
  {
    return this->interval_.get ();
  }

  inline
  void Properties_stream_object::
  interval (const IntervalType& x)
  {
    this->interval_.set (x);
  }

  inline
  void Properties_stream_object::
  interval (::std::auto_ptr< IntervalType > x)
  {
    this->interval_.set (x);
  }

  inline
  ::std::auto_ptr< Properties_stream_object::IntervalType > Properties_stream_object::
  detach_interval ()
  {
    return this->interval_.detach ();
  }

  inline
  Properties_stream_object::IntervalType Properties_stream_object::
  interval_default_value ()
  {
    return IntervalType (0.0);
  }

  inline
  const Properties_stream_object::ControllerType& Properties_stream_object::
  controller () const
  {
    return this->controller_.get ();
  }

  inline
  Properties_stream_object::ControllerType& Properties_stream_object::
  controller ()
  {
    return this->controller_.get ();
  }

  inline
  void Properties_stream_object::
  controller (const ControllerType& x)
  {
    this->controller_.set (x);
  }

  inline
  void Properties_stream_object::
  controller (::std::auto_ptr< ControllerType > x)
  {
    this->controller_.set (x);
  }

  inline
  ::std::auto_ptr< Properties_stream_object::ControllerType > Properties_stream_object::
  detach_controller ()
  {
    return this->controller_.detach ();
  }

  inline
  const Properties_stream_object::ControllerType& Properties_stream_object::
  controller_default_value ()
  {
    return controller_default_value_;
  }

  inline
  const Properties_stream_object::ActivationType& Properties_stream_object::
  activation () const
  {
    return this->activation_.get ();
  }

  inline
  Properties_stream_object::ActivationType& Properties_stream_object::
  activation ()
  {
    return this->activation_.get ();
  }

  inline
  void Properties_stream_object::
  activation (const ActivationType& x)
  {
    this->activation_.set (x);
  }

  inline
  void Properties_stream_object::
  activation (::std::auto_ptr< ActivationType > x)
  {
    this->activation_.set (x);
  }

  inline
  ::std::auto_ptr< Properties_stream_object::ActivationType > Properties_stream_object::
  detach_activation ()
  {
    return this->activation_.detach ();
  }

  inline
  const Properties_stream_object::ActivationType& Properties_stream_object::
  activation_default_value ()
  {
    return activation_default_value_;
  }
}

// Begin epilogue.
//
//
// End epilogue.

#endif // AOSLCPP_AOSL__PROPERTIES_STREAM_OBJECT_INL
