// Copyright (C) 2005-2010 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema
// to C++ data binding compiler, in the Proprietary License mode.
// You should have received a proprietary license from Code Synthesis
// Tools CC prior to generating this code. See the license text for
// conditions.
//

#ifndef AOSLCPP_AOSL__BOX_INL
#define AOSLCPP_AOSL__BOX_INL

// Begin prologue.
//
//
// End prologue.

#include "aosl/vector.hpp"
#include "aosl/vector.inl"

#include "aosl/transformation.hpp"
#include "aosl/transformation.inl"

namespace aosl
{
  // Box
  // 

  inline
  const Box::SizeType& Box::
  size () const
  {
    return this->size_.get ();
  }

  inline
  Box::SizeType& Box::
  size ()
  {
    return this->size_.get ();
  }

  inline
  void Box::
  size (const SizeType& x)
  {
    this->size_.set (x);
  }

  inline
  void Box::
  size (::std::auto_ptr< SizeType > x)
  {
    this->size_.set (x);
  }

  inline
  ::std::auto_ptr< Box::SizeType > Box::
  detach_size ()
  {
    return this->size_.detach ();
  }

  inline
  const Box::TransformationType& Box::
  transformation () const
  {
    return this->transformation_.get ();
  }

  inline
  Box::TransformationType& Box::
  transformation ()
  {
    return this->transformation_.get ();
  }

  inline
  void Box::
  transformation (const TransformationType& x)
  {
    this->transformation_.set (x);
  }

  inline
  void Box::
  transformation (::std::auto_ptr< TransformationType > x)
  {
    this->transformation_.set (x);
  }

  inline
  ::std::auto_ptr< Box::TransformationType > Box::
  detach_transformation ()
  {
    return this->transformation_.detach ();
  }
}

// Begin epilogue.
//
//
// End epilogue.

#endif // AOSLCPP_AOSL__BOX_INL
