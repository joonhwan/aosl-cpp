// Copyright (C) 2005-2010 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema
// to C++ data binding compiler, in the Proprietary License mode.
// You should have received a proprietary license from Code Synthesis
// Tools CC prior to generating this code. See the license text for
// conditions.
//

// Begin prologue.
//

#define AOSLCPP_SOURCE 

//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "aosl/special_color.hpp"

#include <xsd/cxx/xml/dom/wildcard-source.hxx>

#include <xsd/cxx/xml/dom/parsing-source.hxx>

#include <xsd/cxx/tree/type-factory-map.hxx>

#include <xsd/cxx/tree/comparison-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_factory_plate< 0, char >
  type_factory_plate_init;

  static
  const ::xsd::cxx::tree::comparison_plate< 0, char >
  comparison_plate_init;
}

namespace aosl
{
  // Special_color
  //

  Special_color::
  Special_color (const ::xercesc::DOMElement& e,
                 ::xml_schema::Flags f,
                 ::xml_schema::Container* c)
  : ::xml_schema::String (e, f, c)
  {
    _xsd_Special_color_convert ();
  }

  Special_color::
  Special_color (const ::xercesc::DOMAttr& a,
                 ::xml_schema::Flags f,
                 ::xml_schema::Container* c)
  : ::xml_schema::String (a, f, c)
  {
    _xsd_Special_color_convert ();
  }

  Special_color::
  Special_color (const ::std::string& s,
                 const ::xercesc::DOMElement* e,
                 ::xml_schema::Flags f,
                 ::xml_schema::Container* c)
  : ::xml_schema::String (s, e, f, c)
  {
    _xsd_Special_color_convert ();
  }

  Special_color* Special_color::
  _clone (::xml_schema::Flags f,
          ::xml_schema::Container* c) const
  {
    return new class Special_color (*this, f, c);
  }

  Special_color::Value Special_color::
  _xsd_Special_color_convert () const
  {
    ::xsd::cxx::tree::enum_comparator< char > c (_xsd_Special_color_literals_);
    const Value* i (::std::lower_bound (
                      _xsd_Special_color_indexes_,
                      _xsd_Special_color_indexes_ + 17,
                      *this,
                      c));

    if (i == _xsd_Special_color_indexes_ + 17 || _xsd_Special_color_literals_[*i] != *this)
    {
      throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
    }

    return *i;
  }

  const char* const Special_color::
  _xsd_Special_color_literals_[17] =
  {
    "aqua",
    "black",
    "blue",
    "fuchsia",
    "gray",
    "grey",
    "green",
    "lime",
    "maroon",
    "navy",
    "olive",
    "purple",
    "red",
    "silver",
    "teal",
    "white",
    "yellow"
  };

  const Special_color::Value Special_color::
  _xsd_Special_color_indexes_[17] =
  {
    ::aosl::Special_color::aqua,
    ::aosl::Special_color::black,
    ::aosl::Special_color::blue,
    ::aosl::Special_color::fuchsia,
    ::aosl::Special_color::gray,
    ::aosl::Special_color::green,
    ::aosl::Special_color::grey,
    ::aosl::Special_color::lime,
    ::aosl::Special_color::maroon,
    ::aosl::Special_color::navy,
    ::aosl::Special_color::olive,
    ::aosl::Special_color::purple,
    ::aosl::Special_color::red,
    ::aosl::Special_color::silver,
    ::aosl::Special_color::teal,
    ::aosl::Special_color::white,
    ::aosl::Special_color::yellow
  };
}

#include <ostream>

#include <xsd/cxx/tree/std-ostream-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::std_ostream_plate< 0, char >
  std_ostream_plate_init;
}

namespace aosl
{
  ::std::ostream&
  operator<< (::std::ostream& o, Special_color::Value i)
  {
    return o << Special_color::_xsd_Special_color_literals_[i];
  }

  ::std::ostream&
  operator<< (::std::ostream& o, const Special_color& i)
  {
    return o << static_cast< const ::xml_schema::String& > (i);
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace aosl
{
}

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

#include <xsd/cxx/tree/type-serializer-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_serializer_plate< 0, char >
  type_serializer_plate_init;
}

namespace aosl
{
  void
  operator<< (::xercesc::DOMElement& e, const Special_color& i)
  {
    e << static_cast< const ::xml_schema::String& > (i);
  }

  void
  operator<< (::xercesc::DOMAttr& a, const Special_color& i)
  {
    a << static_cast< const ::xml_schema::String& > (i);
  }

  void
  operator<< (::xml_schema::ListStream& l,
              const Special_color& i)
  {
    l << static_cast< const ::xml_schema::String& > (i);
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

