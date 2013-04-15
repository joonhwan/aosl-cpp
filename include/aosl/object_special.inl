// Copyright (C) 2005-2010 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema
// to C++ data binding compiler, in the Proprietary License mode.
// You should have received a proprietary license from Code Synthesis
// Tools CC prior to generating this code. See the license text for
// conditions.
//

#ifndef AOSLCPP_AOSL__OBJECT_SPECIAL_INL
#define AOSLCPP_AOSL__OBJECT_SPECIAL_INL

// Begin prologue.
//
//
// End prologue.

#include "aosl/object.inl"

namespace aosl
{
  // Object_special
  // 

  inline
  const Object_special::TypeType& Object_special::
  type () const
  {
    return this->type_.get ();
  }

  inline
  Object_special::TypeType& Object_special::
  type ()
  {
    return this->type_.get ();
  }

  inline
  void Object_special::
  type (const TypeType& x)
  {
    this->type_.set (x);
  }

  inline
  void Object_special::
  type (::std::auto_ptr< TypeType > x)
  {
    this->type_.set (x);
  }

  inline
  ::std::auto_ptr< Object_special::TypeType > Object_special::
  detach_type ()
  {
    return this->type_.detach ();
  }
}

// Begin epilogue.
//
//
// End epilogue.

#endif // AOSLCPP_AOSL__OBJECT_SPECIAL_INL