// Copyright (C) 2005-2010 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema
// to C++ data binding compiler, in the Proprietary License mode.
// You should have received a proprietary license from Code Synthesis
// Tools CC prior to generating this code. See the license text for
// conditions.
//

#ifndef AOSLCPP_AOSL__OBJECT_REF_ELEMENT_INL
#define AOSLCPP_AOSL__OBJECT_REF_ELEMENT_INL

// Begin prologue.
//
//
// End prologue.

#include "aosl/object_ref.hpp"
#include "aosl/object_ref.inl"

namespace aosl
{
  // Object_ref_element
  // 

  inline
  const Object_ref_element::IdType& Object_ref_element::
  id () const
  {
    return this->id_.get ();
  }

  inline
  Object_ref_element::IdType& Object_ref_element::
  id ()
  {
    return this->id_.get ();
  }

  inline
  void Object_ref_element::
  id (const IdType& x)
  {
    this->id_.set (x);
  }

  inline
  void Object_ref_element::
  id (::std::auto_ptr< IdType > x)
  {
    this->id_.set (x);
  }

  inline
  ::std::auto_ptr< Object_ref_element::IdType > Object_ref_element::
  detach_id ()
  {
    return this->id_.detach ();
  }
}

// Begin epilogue.
//
//
// End epilogue.

#endif // AOSLCPP_AOSL__OBJECT_REF_ELEMENT_INL
