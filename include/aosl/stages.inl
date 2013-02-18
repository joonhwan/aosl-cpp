// Copyright (C) 2005-2010 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema
// to C++ data binding compiler, in the Proprietary License mode.
// You should have received a proprietary license from Code Synthesis
// Tools CC prior to generating this code. See the license text for
// conditions.
//

#ifndef AOSLCPP_AOSL__STAGES_INL
#define AOSLCPP_AOSL__STAGES_INL

// Begin prologue.
//
//
// End prologue.

#include "aosl/stage.hpp"
#include "aosl/stage.inl"

namespace aosl
{
  // Stages
  // 

  inline
  const Stages::StageSequence& Stages::
  stage () const
  {
    return this->stage_;
  }

  inline
  Stages::StageSequence& Stages::
  stage ()
  {
    return this->stage_;
  }

  inline
  void Stages::
  stage (const StageSequence& s)
  {
    this->stage_ = s;
  }
}

// Begin epilogue.
//
//
// End epilogue.

#endif // AOSLCPP_AOSL__STAGES_INL
