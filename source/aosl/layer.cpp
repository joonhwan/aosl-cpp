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

#include "aosl/layer.hpp"

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
  // Layer
  //

  Layer::
  Layer (const IdType& id)
  : ::xml_schema::Type (),
    extension_ (::xml_schema::Flags (), this),
    object_ (::xml_schema::Flags (), this),
    id_ (id, ::xml_schema::Flags (), this),
    active_ (active_default_value (), ::xml_schema::Flags (), this)
  {
  }

  Layer::
  Layer (const Layer& x,
         ::xml_schema::Flags f,
         ::xml_schema::Container* c)
  : ::xml_schema::Type (x, f, c),
    extension_ (x.extension_, f, this),
    object_ (x.object_, f, this),
    id_ (x.id_, f, this),
    active_ (x.active_, f, this)
  {
  }

  Layer::
  Layer (const ::xercesc::DOMElement& e,
         ::xml_schema::Flags f,
         ::xml_schema::Container* c)
  : ::xml_schema::Type (e, f | ::xml_schema::Flags::base, c),
    extension_ (f, this),
    object_ (f, this),
    id_ (f, this),
    active_ (f, this)
  {
    if ((f & ::xml_schema::Flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, true);
      this->parse (p, f);
    }
  }

  void Layer::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::Flags f)
  {
    for (; p.more_elements (); p.next_element ())
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // extension
      //
      if (n.name () == "extension" && n.namespace_ () == "artofsequence.org/aosl/1.0")
      {
        ::std::auto_ptr< ExtensionType > r (
          ExtensionTraits::create (i, f, this));

        if (!this->extension_)
        {
          this->extension_.set (r);
          continue;
        }
      }

      // object
      //
      if (n.name () == "object" && n.namespace_ () == "artofsequence.org/aosl/1.0")
      {
        ::std::auto_ptr< ObjectType > r (
          ObjectTraits::create (i, f, this));

        this->object_.push_back (r);
        continue;
      }

      break;
    }

    while (p.more_attributes ())
    {
      const ::xercesc::DOMAttr& i (p.next_attribute ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      if (n.name () == "id" && n.namespace_ ().empty ())
      {
        ::std::auto_ptr< IdType > r (
          IdTraits::create (i, f, this));

        this->id_.set (r);
        continue;
      }

      if (n.name () == "active" && n.namespace_ ().empty ())
      {
        this->active_.set (ActiveTraits::create (i, f, this));
        continue;
      }
    }

    if (!id_.present ())
    {
      throw ::xsd::cxx::tree::expected_attribute< char > (
        "id",
        "");
    }

    if (!active_.present ())
    {
      this->active_.set (active_default_value ());
    }
  }

  Layer* Layer::
  _clone (::xml_schema::Flags f,
          ::xml_schema::Container* c) const
  {
    return new class Layer (*this, f, c);
  }

  Layer::
  ~Layer ()
  {
  }

  bool
  operator== (const Layer& x, const Layer& y)
  {
    if (!(x.extension () == y.extension ()))
      return false;

    if (!(x.object () == y.object ()))
      return false;

    if (!(x.id () == y.id ()))
      return false;

    if (!(x.active () == y.active ()))
      return false;

    return true;
  }

  bool
  operator!= (const Layer& x, const Layer& y)
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
  operator<< (::std::ostream& o, const Layer& i)
  {
    if (i.extension ())
    {
      o << ::std::endl << "extension: " << *i.extension ();
    }

    for (Layer::ObjectConstIterator
         b (i.object ().begin ()), e (i.object ().end ());
         b != e; ++b)
    {
      o << ::std::endl << "object: " << *b;
    }

    o << ::std::endl << "id: " << i.id ();
    o << ::std::endl << "active: " << i.active ();
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
  operator<< (::xercesc::DOMElement& e, const Layer& i)
  {
    e << static_cast< const ::xml_schema::Type& > (i);

    // extension
    //
    if (i.extension ())
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "extension",
          "artofsequence.org/aosl/1.0",
          e));

      s << *i.extension ();
    }

    // object
    //
    for (Layer::ObjectConstIterator
         b (i.object ().begin ()), n (i.object ().end ());
         b != n; ++b)
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "object",
          "artofsequence.org/aosl/1.0",
          e));

      s << *b;
    }

    // id
    //
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "id",
          e));

      a << i.id ();
    }

    // active
    //
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "active",
          e));

      a << i.active ();
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

