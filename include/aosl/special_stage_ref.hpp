// Copyright (C) 2005-2010 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema
// to C++ data binding compiler, in the Proprietary License mode.
// You should have received a proprietary license from Code Synthesis
// Tools CC prior to generating this code. See the license text for
// conditions.
//

/**
 * @file
 * @brief Generated from special_stage_ref.xsd.
 */

#ifndef AOSLCPP_AOSL__SPECIAL_STAGE_REF_HPP
#define AOSLCPP_AOSL__SPECIAL_STAGE_REF_HPP

// Begin prologue.
//

#include <aoslcpp/common.hpp>

//
// End prologue.

#include <xsd/cxx/config.hxx>

#if (XSD_INT_VERSION != 3030000L)
#error XSD runtime version mismatch
#endif

#include <xsd/cxx/pre.hxx>

#include "aosl/special_stage_ref_forward.hpp"

#include <memory>    // std::auto_ptr
#include <limits>    // std::numeric_limits
#include <algorithm> // std::binary_search

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/containers.hxx>
#include <xsd/cxx/tree/list.hxx>

#include <xsd/cxx/xml/dom/parsing-header.hxx>

#include <xsd/cxx/tree/containers-wildcard.hxx>

#ifndef XSD_DONT_INCLUDE_INLINE
#define XSD_DONT_INCLUDE_INLINE

#undef XSD_DONT_INCLUDE_INLINE
#else

#endif // XSD_DONT_INCLUDE_INLINE

/**
 * @brief C++ namespace for the %artofsequence.org/aosl/1.0
 * schema namespace.
 */
namespace aosl
{
  /**
   * @brief Enumeration class corresponding to the %special_stage_ref
   * schema type.
   *
   * Reference to one or more stages automatically found by using a search
   * logic.
   */
  class Special_stage_ref: public ::xml_schema::String
  {
    public:

    /**
     * @brief Underlying enum type.
     */
    enum Value
    {
      /**
       * Represent all the stages.
       * Useful to allow a move to be available from all the stages.
       */
      cxx_all
    };

    /**
     * @brief Default constructor.
     *
     * Note that this constructor may leave the instance in an
     * invalid state.
     */
    Special_stage_ref ();

    /**
     * @brief Create an instance from the underlying enum value.
     *
     * @param v A enum value.
     */
    Special_stage_ref (Value v);

    /**
     * @brief Create an instance from a C string.
     *
     * @param v A string value.
     */
    Special_stage_ref (const char* v);

    /**
     * @brief Create an instance from a string.
     *
     * @param v A string value.
     */
    Special_stage_ref (const ::std::string& v);

    /**
     * @brief Create an instance from the base value.
     *
     * @param v A base value.
     */
    Special_stage_ref (const ::xml_schema::String& v);

    /**
     * @brief Create an instance from a DOM element.
     *
     * @param e A DOM element to extract the data from.
     * @param f Flags to create the new instance with.
     * @param c A pointer to the object that will contain the new
     * instance.
     */
    Special_stage_ref (const ::xercesc::DOMElement& e,
                       ::xml_schema::Flags f = 0,
                       ::xml_schema::Container* c = 0);

    /**
     * @brief Create an instance from a DOM attribute.
     *
     * @param a A DOM attribute to extract the data from.
     * @param f Flags to create the new instance with.
     * @param c A pointer to the object that will contain the new
     * instance.
     */
    Special_stage_ref (const ::xercesc::DOMAttr& a,
                       ::xml_schema::Flags f = 0,
                       ::xml_schema::Container* c = 0);

    /**
     * @brief Create an instance from a string fragment.
     *
     * @param s A string fragment to extract the data from.
     * @param e A pointer to DOM element containing the string fragment.
     * @param f Flags to create the new instance with.
     * @param c A pointer to the object that will contain the new
     * instance.
     */
    Special_stage_ref (const ::std::string& s,
                       const ::xercesc::DOMElement* e,
                       ::xml_schema::Flags f = 0,
                       ::xml_schema::Container* c = 0);

    /**
     * @brief Copy constructor.
     *
     * @param x An instance to make a copy of.
     * @param f Flags to create the copy with.
     * @param c A pointer to the object that will contain the copy.
     *
     * For polymorphic object models use the @c _clone function instead.
     */
    Special_stage_ref (const Special_stage_ref& x,
                       ::xml_schema::Flags f = 0,
                       ::xml_schema::Container* c = 0);

    /**
     * @brief Copy the instance polymorphically.
     *
     * @param f Flags to create the copy with.
     * @param c A pointer to the object that will contain the copy.
     * @return A pointer to the dynamically allocated copy.
     *
     * This function ensures that the dynamic type of the instance is
     * used for copying and should be used for polymorphic object
     * models instead of the copy constructor.
     */
    virtual Special_stage_ref*
    _clone (::xml_schema::Flags f = 0,
            ::xml_schema::Container* c = 0) const;

    /**
     * @brief Assign the underlying enum value.
     *
     * @param v A enum value.
     * @return A refernce to the instance.
     */
    Special_stage_ref&
    operator= (Value v);

    /**
     * @brief Implicit conversion operator to the underlying
     * enum value.
     *
     * @return A enum value.
     */
    virtual
    operator Value () const
    {
      return _xsd_Special_stage_ref_convert ();
    }

    //@cond

    protected:
    Value
    _xsd_Special_stage_ref_convert () const;

    public:
    static const char* const _xsd_Special_stage_ref_literals_[1];
    static const Value _xsd_Special_stage_ref_indexes_[1];

    //@endcond
  };
}

#ifndef XSD_DONT_INCLUDE_INLINE

#endif // XSD_DONT_INCLUDE_INLINE

#include <iosfwd>

namespace aosl
{
  ::std::ostream&
  operator<< (::std::ostream&, Special_stage_ref::Value);

  ::std::ostream&
  operator<< (::std::ostream&, const Special_stage_ref&);
}

#include <iosfwd>

#include <xercesc/sax/InputSource.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>

namespace aosl
{
}

#include <iosfwd>

#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>
#include <xercesc/framework/XMLFormatter.hpp>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

namespace aosl
{
  void
  operator<< (::xercesc::DOMElement&, const Special_stage_ref&);

  void
  operator<< (::xercesc::DOMAttr&, const Special_stage_ref&);

  void
  operator<< (::xml_schema::ListStream&,
              const Special_stage_ref&);
}

#ifndef XSD_DONT_INCLUDE_INLINE
#include "aosl/special_stage_ref.inl"
#endif // XSD_DONT_INCLUDE_INLINE

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // AOSLCPP_AOSL__SPECIAL_STAGE_REF_HPP
