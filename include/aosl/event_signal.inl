// Copyright (C) 2005-2010 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema
// to C++ data binding compiler, in the Proprietary License mode.
// You should have received a proprietary license from Code Synthesis
// Tools CC prior to generating this code. See the license text for
// conditions.
//

#ifndef AOSLCPP_AOSL__EVENT_SIGNAL_INL
#define AOSLCPP_AOSL__EVENT_SIGNAL_INL

// Begin prologue.
//
//
// End prologue.

#include "aosl/event.inl"

#include "aosl/signal_source.hpp"
#include "aosl/signal_source.inl"

namespace aosl
{
  // Event_signal
  // 

  inline
  const Event_signal::SourceType& Event_signal::
  source () const
  {
    return this->source_.get ();
  }

  inline
  Event_signal::SourceType& Event_signal::
  source ()
  {
    return this->source_.get ();
  }

  inline
  void Event_signal::
  source (const SourceType& x)
  {
    this->source_.set (x);
  }

  inline
  void Event_signal::
  source (::std::auto_ptr< SourceType > x)
  {
    this->source_.set (x);
  }
}

// Begin epilogue.
//
//
// End epilogue.

#endif // AOSLCPP_AOSL__EVENT_SIGNAL_INL
