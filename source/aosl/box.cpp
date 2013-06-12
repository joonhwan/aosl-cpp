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

#include "aosl/box.hpp"

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
  // Box
  //

  Box::
  Box ()
  : ::xml_schema::Type (),
    size_ (::xml_schema::Flags (), this),
    transformation_ (::xml_schema::Flags (), this)
  {
  }

  Box::
  Box (const Box& x,
       ::xml_schema::Flags f,
       ::xml_schema::Container* c)
  : ::xml_schema::Type (x, f, c),
    size_ (x.size_, f, this),
    transformation_ (x.transformation_, f, this)
  {
  }

  Box::
  Box (const ::xercesc::DOMElement& e,
       ::xml_schema::Flags f,
       ::xml_schema::Container* c)
  : ::xml_schema::Type (e, f | ::xml_schema::Flags::base, c),
    size_ (f, this),
    transformation_ (f, this)
  {
    if ((f & ::xml_schema::Flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
      this->parse (p, f);
    }
  }

  void Box::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::Flags f)
  {
    for (; p.more_elements (); p.next_element ())
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // size
      //
      if (n.name () == "size" && n.namespace_ () == "artofsequence.org/aosl/1.0")
      {
        ::std::auto_ptr< SizeType > r (
          SizeTraits::create (i, f, this));

        if (!this->size_)
        {
          this->size_.set (r);
          continue;
        }
      }

      // transformation
      //
      if (n.name () == "transformation" && n.namespace_ () == "artofsequence.org/aosl/1.0")
      {
        ::std::auto_ptr< TransformationType > r (
          TransformationTraits::create (i, f, this));

        if (!this->transformation_)
        {
          this->transformation_.set (r);
          continue;
        }
      }

      break;
    }
  }

  Box* Box::
  _clone (::xml_schema::Flags f,
          ::xml_schema::Container* c) const
  {
    return new class Box (*this, f, c);
  }

  Box::
  ~Box ()
  {
  }

  bool
  operator== (const Box& x, const Box& y)
  {
    if (!(x.size () == y.size ()))
      return false;

    if (!(x.transformation () == y.transformation ()))
      return false;

    return true;
  }

  bool
  operator!= (const Box& x, const Box& y)
  {
    return !(x == y);
  }
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
  operator<< (::std::ostream& o, const Box& i)
  {
    if (i.size ())
    {
      o << ::std::endl << "size: " << *i.size ();
    }

    if (i.transformation ())
    {
      o << ::std::endl << "transformation: " << *i.transformation ();
    }

    return o;
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
  operator<< (::xercesc::DOMElement& e, const Box& i)
  {
    e << static_cast< const ::xml_schema::Type& > (i);

    // size
    //
    if (i.size ())
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "size",
          "artofsequence.org/aosl/1.0",
          e));

      s << *i.size ();
    }

    // transformation
    //
    if (i.transformation ())
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "transformation",
          "artofsequence.org/aosl/1.0",
          e));

      s << *i.transformation ();
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

