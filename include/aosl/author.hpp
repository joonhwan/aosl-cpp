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
 * @brief Generated from author.xsd.
 */

#ifndef AOSLCPP_AOSL__AUTHOR_HPP
#define AOSLCPP_AOSL__AUTHOR_HPP

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

#include "aosl/author_forward.hpp"

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

#include "aosl/extension_forward.hpp"

#undef XSD_DONT_INCLUDE_INLINE
#else

#include "aosl/extension_forward.hpp"

#endif // XSD_DONT_INCLUDE_INLINE

/**
 * @brief C++ namespace for the %artofsequence.org/aosl/1.0
 * schema namespace.
 */
namespace aosl
{
  /**
   * @brief Class corresponding to the %author schema type.
   *
   * Informations about an author.
   *
   * @nosubgrouping
   */
  class Author: public ::xml_schema::Type
  {
    public:
    /**
     * @name name
     *
     * @brief Accessor and modifier functions for the %name
     * optional element.
     *
     * Name of the author.
     */
    //@{

    /**
     * @brief Element type.
     */
    typedef ::xml_schema::String NameType;

    /**
     * @brief Element optional container type.
     */
    typedef ::xsd::cxx::tree::optional< NameType > NameOptional;

    /**
     * @brief Element traits type.
     */
    typedef ::xsd::cxx::tree::traits< NameType, char > NameTraits;

    /**
     * @brief Return a read-only (constant) reference to the element
     * container.
     *
     * @return A constant reference to the optional container.
     */
    const NameOptional&
    name () const;

    /**
     * @brief Return a read-write reference to the element container.
     *
     * @return A reference to the optional container.
     */
    NameOptional&
    name ();

    /**
     * @brief Set the element value.
     *
     * @param x A new value to set.
     *
     * This function makes a copy of its argument and sets it as
     * the new value of the element.
     */
    void
    name (const NameType& x);

    /**
     * @brief Set the element value.
     *
     * @param x An optional container with the new value to set.
     *
     * If the value is present in @a x then this function makes a copy 
     * of this value and sets it as the new value of the element.
     * Otherwise the element container is set the 'not present' state.
     */
    void
    name (const NameOptional& x);

    /**
     * @brief Set the element value without copying.
     *
     * @param p A new value to use.
     *
     * This function will try to use the passed value directly instead
     * of making a copy.
     */
    void
    name (::std::auto_ptr< NameType > p);

    //@}

    /**
     * @name about
     *
     * @brief Accessor and modifier functions for the %about
     * optional element.
     *
     * Description of the author and/or what he/she did in the sequence.
     */
    //@{

    /**
     * @brief Element type.
     */
    typedef ::xml_schema::String AboutType;

    /**
     * @brief Element optional container type.
     */
    typedef ::xsd::cxx::tree::optional< AboutType > AboutOptional;

    /**
     * @brief Element traits type.
     */
    typedef ::xsd::cxx::tree::traits< AboutType, char > AboutTraits;

    /**
     * @brief Return a read-only (constant) reference to the element
     * container.
     *
     * @return A constant reference to the optional container.
     */
    const AboutOptional&
    about () const;

    /**
     * @brief Return a read-write reference to the element container.
     *
     * @return A reference to the optional container.
     */
    AboutOptional&
    about ();

    /**
     * @brief Set the element value.
     *
     * @param x A new value to set.
     *
     * This function makes a copy of its argument and sets it as
     * the new value of the element.
     */
    void
    about (const AboutType& x);

    /**
     * @brief Set the element value.
     *
     * @param x An optional container with the new value to set.
     *
     * If the value is present in @a x then this function makes a copy 
     * of this value and sets it as the new value of the element.
     * Otherwise the element container is set the 'not present' state.
     */
    void
    about (const AboutOptional& x);

    /**
     * @brief Set the element value without copying.
     *
     * @param p A new value to use.
     *
     * This function will try to use the passed value directly instead
     * of making a copy.
     */
    void
    about (::std::auto_ptr< AboutType > p);

    //@}

    /**
     * @name comments
     *
     * @brief Accessor and modifier functions for the %comments
     * optional element.
     *
     * Comments from the author.
     */
    //@{

    /**
     * @brief Element type.
     */
    typedef ::xml_schema::String CommentsType;

    /**
     * @brief Element optional container type.
     */
    typedef ::xsd::cxx::tree::optional< CommentsType > CommentsOptional;

    /**
     * @brief Element traits type.
     */
    typedef ::xsd::cxx::tree::traits< CommentsType, char > CommentsTraits;

    /**
     * @brief Return a read-only (constant) reference to the element
     * container.
     *
     * @return A constant reference to the optional container.
     */
    const CommentsOptional&
    comments () const;

    /**
     * @brief Return a read-write reference to the element container.
     *
     * @return A reference to the optional container.
     */
    CommentsOptional&
    comments ();

    /**
     * @brief Set the element value.
     *
     * @param x A new value to set.
     *
     * This function makes a copy of its argument and sets it as
     * the new value of the element.
     */
    void
    comments (const CommentsType& x);

    /**
     * @brief Set the element value.
     *
     * @param x An optional container with the new value to set.
     *
     * If the value is present in @a x then this function makes a copy 
     * of this value and sets it as the new value of the element.
     * Otherwise the element container is set the 'not present' state.
     */
    void
    comments (const CommentsOptional& x);

    /**
     * @brief Set the element value without copying.
     *
     * @param p A new value to use.
     *
     * This function will try to use the passed value directly instead
     * of making a copy.
     */
    void
    comments (::std::auto_ptr< CommentsType > p);

    //@}

    /**
     * @name website
     *
     * @brief Accessor and modifier functions for the %website
     * optional element.
     *
     * Website of the author.
     */
    //@{

    /**
     * @brief Element type.
     */
    typedef ::xml_schema::Uri WebsiteType;

    /**
     * @brief Element optional container type.
     */
    typedef ::xsd::cxx::tree::optional< WebsiteType > WebsiteOptional;

    /**
     * @brief Element traits type.
     */
    typedef ::xsd::cxx::tree::traits< WebsiteType, char > WebsiteTraits;

    /**
     * @brief Return a read-only (constant) reference to the element
     * container.
     *
     * @return A constant reference to the optional container.
     */
    const WebsiteOptional&
    website () const;

    /**
     * @brief Return a read-write reference to the element container.
     *
     * @return A reference to the optional container.
     */
    WebsiteOptional&
    website ();

    /**
     * @brief Set the element value.
     *
     * @param x A new value to set.
     *
     * This function makes a copy of its argument and sets it as
     * the new value of the element.
     */
    void
    website (const WebsiteType& x);

    /**
     * @brief Set the element value.
     *
     * @param x An optional container with the new value to set.
     *
     * If the value is present in @a x then this function makes a copy 
     * of this value and sets it as the new value of the element.
     * Otherwise the element container is set the 'not present' state.
     */
    void
    website (const WebsiteOptional& x);

    /**
     * @brief Set the element value without copying.
     *
     * @param p A new value to use.
     *
     * This function will try to use the passed value directly instead
     * of making a copy.
     */
    void
    website (::std::auto_ptr< WebsiteType > p);

    //@}

    /**
     * @name email
     *
     * @brief Accessor and modifier functions for the %email
     * optional element.
     *
     * Email of the author.
     */
    //@{

    /**
     * @brief Element type.
     */
    typedef ::xml_schema::String EmailType;

    /**
     * @brief Element optional container type.
     */
    typedef ::xsd::cxx::tree::optional< EmailType > EmailOptional;

    /**
     * @brief Element traits type.
     */
    typedef ::xsd::cxx::tree::traits< EmailType, char > EmailTraits;

    /**
     * @brief Return a read-only (constant) reference to the element
     * container.
     *
     * @return A constant reference to the optional container.
     */
    const EmailOptional&
    email () const;

    /**
     * @brief Return a read-write reference to the element container.
     *
     * @return A reference to the optional container.
     */
    EmailOptional&
    email ();

    /**
     * @brief Set the element value.
     *
     * @param x A new value to set.
     *
     * This function makes a copy of its argument and sets it as
     * the new value of the element.
     */
    void
    email (const EmailType& x);

    /**
     * @brief Set the element value.
     *
     * @param x An optional container with the new value to set.
     *
     * If the value is present in @a x then this function makes a copy 
     * of this value and sets it as the new value of the element.
     * Otherwise the element container is set the 'not present' state.
     */
    void
    email (const EmailOptional& x);

    /**
     * @brief Set the element value without copying.
     *
     * @param p A new value to use.
     *
     * This function will try to use the passed value directly instead
     * of making a copy.
     */
    void
    email (::std::auto_ptr< EmailType > p);

    //@}

    /**
     * @name infos
     *
     * @brief Accessor and modifier functions for the %infos
     * optional element.
     *
     * Additional arbitrary informations about the author.
     */
    //@{

    /**
     * @brief Element type.
     */
    typedef ::aosl::Extension InfosType;

    /**
     * @brief Element optional container type.
     */
    typedef ::xsd::cxx::tree::optional< InfosType > InfosOptional;

    /**
     * @brief Element traits type.
     */
    typedef ::xsd::cxx::tree::traits< InfosType, char > InfosTraits;

    /**
     * @brief Return a read-only (constant) reference to the element
     * container.
     *
     * @return A constant reference to the optional container.
     */
    const InfosOptional&
    infos () const;

    /**
     * @brief Return a read-write reference to the element container.
     *
     * @return A reference to the optional container.
     */
    InfosOptional&
    infos ();

    /**
     * @brief Set the element value.
     *
     * @param x A new value to set.
     *
     * This function makes a copy of its argument and sets it as
     * the new value of the element.
     */
    void
    infos (const InfosType& x);

    /**
     * @brief Set the element value.
     *
     * @param x An optional container with the new value to set.
     *
     * If the value is present in @a x then this function makes a copy 
     * of this value and sets it as the new value of the element.
     * Otherwise the element container is set the 'not present' state.
     */
    void
    infos (const InfosOptional& x);

    /**
     * @brief Set the element value without copying.
     *
     * @param p A new value to use.
     *
     * This function will try to use the passed value directly instead
     * of making a copy.
     */
    void
    infos (::std::auto_ptr< InfosType > p);

    //@}

    /**
     * @name Constructors
     */
    //@{

    /**
     * @brief Create an instance from the ultimate base and
     * initializers for required elements and attributes.
     */
    Author ();

    /**
     * @brief Create an instance from a DOM element.
     *
     * @param e A DOM element to extract the data from.
     * @param f Flags to create the new instance with.
     * @param c A pointer to the object that will contain the new
     * instance.
     */
    Author (const ::xercesc::DOMElement& e,
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
    Author (const Author& x,
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
    virtual Author*
    _clone (::xml_schema::Flags f = 0,
            ::xml_schema::Container* c = 0) const;

    //@}

    /**
     * @brief Destructor.
     */
    virtual 
    ~Author ();

    // Implementation.
    //

    //@cond

    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::Flags);

    protected:
    NameOptional name_;
    AboutOptional about_;
    CommentsOptional comments_;
    WebsiteOptional website_;
    EmailOptional email_;
    InfosOptional infos_;

    //@endcond
  };

  bool
  operator== (const Author&, const Author&);

  bool
  operator!= (const Author&, const Author&);
}

#ifndef XSD_DONT_INCLUDE_INLINE

#include "aosl/extension.hpp"
#include "aosl/extension.inl"

#endif // XSD_DONT_INCLUDE_INLINE

#include <iosfwd>

namespace aosl
{
  ::std::ostream&
  operator<< (::std::ostream&, const Author&);
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
  operator<< (::xercesc::DOMElement&, const Author&);
}

#ifndef XSD_DONT_INCLUDE_INLINE
#include "aosl/author.inl"
#endif // XSD_DONT_INCLUDE_INLINE

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // AOSLCPP_AOSL__AUTHOR_HPP
