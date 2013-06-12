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
 * @brief Generated from rotation.xsd.
 */

#ifndef AOSLCPP_AOSL__ROTATION_HPP
#define AOSLCPP_AOSL__ROTATION_HPP

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

#include "aosl/rotation_forward.hpp"

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

#include "aosl/angle_forward.hpp"

#undef XSD_DONT_INCLUDE_INLINE
#else

#include "aosl/angle_forward.hpp"

#endif // XSD_DONT_INCLUDE_INLINE

/**
 * @brief C++ namespace for the %artofsequence.org/aosl/1.0
 * schema namespace.
 */
namespace aosl
{
  /**
   * @brief Class corresponding to the %rotation schema type.
   *
   * Rotation representation.
   *
   * @nosubgrouping
   */
  class Rotation: public ::xml_schema::Type
  {
    public:
    /**
     * @name yaw
     *
     * @brief Accessor and modifier functions for the %yaw
     * optional attribute with a default value.
     *
     * Rotation angle aroun the x-axis.
     */
    //@{

    /**
     * @brief Attribute type.
     */
    typedef ::aosl::Angle YawType;

    /**
     * @brief Attribute traits type.
     */
    typedef ::xsd::cxx::tree::traits< YawType, char > YawTraits;

    /**
     * @brief Return a read-only (constant) reference to the attribute.
     *
     * @return A constant reference to the attribute.
     */
    const YawType&
    yaw () const;

    /**
     * @brief Return a read-write reference to the attribute.
     *
     * @return A reference to the attribute.
     */
    YawType&
    yaw ();

    /**
     * @brief Set the attribute value.
     *
     * @param x A new value to set.
     *
     * This function makes a copy of its argument and sets it as
     * the new value of the attribute.
     */
    void
    yaw (const YawType& x);

    /**
     * @brief Set the attribute value without copying.
     *
     * @param p A new value to use.
     *
     * This function will try to use the passed value directly
     * instead of making a copy.
     */
    void
    yaw (::std::auto_ptr< YawType > p);

    /**
     * @brief Return the default value for the attribute.
     *
     * @return The attribute's default value.
     */
    static YawType
    yaw_default_value ();

    //@}

    /**
     * @name pitch
     *
     * @brief Accessor and modifier functions for the %pitch
     * optional attribute with a default value.
     *
     * Rotation angle aroun the y-axis.
     */
    //@{

    /**
     * @brief Attribute type.
     */
    typedef ::aosl::Angle PitchType;

    /**
     * @brief Attribute traits type.
     */
    typedef ::xsd::cxx::tree::traits< PitchType, char > PitchTraits;

    /**
     * @brief Return a read-only (constant) reference to the attribute.
     *
     * @return A constant reference to the attribute.
     */
    const PitchType&
    pitch () const;

    /**
     * @brief Return a read-write reference to the attribute.
     *
     * @return A reference to the attribute.
     */
    PitchType&
    pitch ();

    /**
     * @brief Set the attribute value.
     *
     * @param x A new value to set.
     *
     * This function makes a copy of its argument and sets it as
     * the new value of the attribute.
     */
    void
    pitch (const PitchType& x);

    /**
     * @brief Set the attribute value without copying.
     *
     * @param p A new value to use.
     *
     * This function will try to use the passed value directly
     * instead of making a copy.
     */
    void
    pitch (::std::auto_ptr< PitchType > p);

    /**
     * @brief Return the default value for the attribute.
     *
     * @return The attribute's default value.
     */
    static PitchType
    pitch_default_value ();

    //@}

    /**
     * @name roll
     *
     * @brief Accessor and modifier functions for the %roll
     * optional attribute with a default value.
     *
     * Rotation angle aroun the z-axis.
     */
    //@{

    /**
     * @brief Attribute type.
     */
    typedef ::aosl::Angle RollType;

    /**
     * @brief Attribute traits type.
     */
    typedef ::xsd::cxx::tree::traits< RollType, char > RollTraits;

    /**
     * @brief Return a read-only (constant) reference to the attribute.
     *
     * @return A constant reference to the attribute.
     */
    const RollType&
    roll () const;

    /**
     * @brief Return a read-write reference to the attribute.
     *
     * @return A reference to the attribute.
     */
    RollType&
    roll ();

    /**
     * @brief Set the attribute value.
     *
     * @param x A new value to set.
     *
     * This function makes a copy of its argument and sets it as
     * the new value of the attribute.
     */
    void
    roll (const RollType& x);

    /**
     * @brief Set the attribute value without copying.
     *
     * @param p A new value to use.
     *
     * This function will try to use the passed value directly
     * instead of making a copy.
     */
    void
    roll (::std::auto_ptr< RollType > p);

    /**
     * @brief Return the default value for the attribute.
     *
     * @return The attribute's default value.
     */
    static RollType
    roll_default_value ();

    //@}

    /**
     * @name Constructors
     */
    //@{

    /**
     * @brief Create an instance from the ultimate base and
     * initializers for required elements and attributes.
     */
    Rotation ();

    /**
     * @brief Create an instance from a DOM element.
     *
     * @param e A DOM element to extract the data from.
     * @param f Flags to create the new instance with.
     * @param c A pointer to the object that will contain the new
     * instance.
     */
    Rotation (const ::xercesc::DOMElement& e,
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
    Rotation (const Rotation& x,
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
    virtual Rotation*
    _clone (::xml_schema::Flags f = 0,
            ::xml_schema::Container* c = 0) const;

    //@}

    /**
     * @brief Destructor.
     */
    virtual 
    ~Rotation ();

    // Implementation.
    //

    //@cond

    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::Flags);

    protected:
    ::xsd::cxx::tree::one< YawType > yaw_;
    ::xsd::cxx::tree::one< PitchType > pitch_;
    ::xsd::cxx::tree::one< RollType > roll_;

    //@endcond
  };

  bool
  operator== (const Rotation&, const Rotation&);

  bool
  operator!= (const Rotation&, const Rotation&);
}

#ifndef XSD_DONT_INCLUDE_INLINE

#include "aosl/angle.hpp"
#include "aosl/angle.inl"

#endif // XSD_DONT_INCLUDE_INLINE

#include <iosfwd>

namespace aosl
{
  ::std::ostream&
  operator<< (::std::ostream&, const Rotation&);
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
  operator<< (::xercesc::DOMElement&, const Rotation&);
}

#ifndef XSD_DONT_INCLUDE_INLINE
#include "aosl/rotation.inl"
#endif // XSD_DONT_INCLUDE_INLINE

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // AOSLCPP_AOSL__ROTATION_HPP
