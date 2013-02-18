// Copyright (C) 2005-2010 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema
// to C++ data binding compiler, in the Proprietary License mode.
// You should have received a proprietary license from Code Synthesis
// Tools CC prior to generating this code. See the license text for
// conditions.
//

#ifndef AOSLCPP_AOSL__STAGE_REF_LIST_INL
#define AOSLCPP_AOSL__STAGE_REF_LIST_INL

// Begin prologue.
//
//
// End prologue.

#include "aosl/stage_ref.inl"

namespace aosl
{
  // Stage_ref_list
  //

  inline
  Stage_ref_list::
  Stage_ref_list ()
  : ::xsd::cxx::tree::list< ::aosl::Stage_ref, char > ( ::xml_schema::Flags (0), this)
  {
  }

  inline
  Stage_ref_list::
  Stage_ref_list (size_type n, const ::aosl::Stage_ref& x)
  : ::xsd::cxx::tree::list< ::aosl::Stage_ref, char > (n, x, this)
  {
  }

  inline
  Stage_ref_list::
  Stage_ref_list (const Stage_ref_list& o,
                  ::xml_schema::Flags f,
                  ::xml_schema::Container* c)
  : ::xml_schema::SimpleType (o, f, c),
    ::xsd::cxx::tree::list< ::aosl::Stage_ref, char > (o, f, this)
  {
  }
}

// Begin epilogue.
//
//
// End epilogue.

#endif // AOSLCPP_AOSL__STAGE_REF_LIST_INL
