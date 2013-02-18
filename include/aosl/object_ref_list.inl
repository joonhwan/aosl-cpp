// Copyright (C) 2005-2010 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema
// to C++ data binding compiler, in the Proprietary License mode.
// You should have received a proprietary license from Code Synthesis
// Tools CC prior to generating this code. See the license text for
// conditions.
//

#ifndef AOSLCPP_AOSL__OBJECT_REF_LIST_INL
#define AOSLCPP_AOSL__OBJECT_REF_LIST_INL

// Begin prologue.
//
//
// End prologue.

#include "aosl/object_ref.inl"

namespace aosl
{
  // Object_ref_list
  //

  inline
  Object_ref_list::
  Object_ref_list ()
  : ::xsd::cxx::tree::list< ::aosl::Object_ref, char > ( ::xml_schema::Flags (0), this)
  {
  }

  inline
  Object_ref_list::
  Object_ref_list (size_type n, const ::aosl::Object_ref& x)
  : ::xsd::cxx::tree::list< ::aosl::Object_ref, char > (n, x, this)
  {
  }

  inline
  Object_ref_list::
  Object_ref_list (const Object_ref_list& o,
                   ::xml_schema::Flags f,
                   ::xml_schema::Container* c)
  : ::xml_schema::SimpleType (o, f, c),
    ::xsd::cxx::tree::list< ::aosl::Object_ref, char > (o, f, this)
  {
  }
}

// Begin epilogue.
//
//
// End epilogue.

#endif // AOSLCPP_AOSL__OBJECT_REF_LIST_INL
