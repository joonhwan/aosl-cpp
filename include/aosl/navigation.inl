// Copyright (C) 2005-2010 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema
// to C++ data binding compiler, in the Proprietary License mode.
// You should have received a proprietary license from Code Synthesis
// Tools CC prior to generating this code. See the license text for
// conditions.
//

#ifndef AOSLCPP_AOSL__NAVIGATION_INL
#define AOSLCPP_AOSL__NAVIGATION_INL

// Begin prologue.
//
//
// End prologue.

#include "aosl/event.hpp"
#include "aosl/event.inl"

namespace aosl
{
  // Navigation
  // 

  inline
  const Navigation::EventSequence& Navigation::
  event () const
  {
    return this->event_;
  }

  inline
  Navigation::EventSequence& Navigation::
  event ()
  {
    return this->event_;
  }

  inline
  void Navigation::
  event (const EventSequence& s)
  {
    this->event_ = s;
  }
}

// Begin epilogue.
//
//
// End epilogue.

#endif // AOSLCPP_AOSL__NAVIGATION_INL
