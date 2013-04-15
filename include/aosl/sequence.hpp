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
 * @brief Generated from sequence.xsd.
 */

#ifndef AOSLCPP_AOSL__SEQUENCE_HPP
#define AOSLCPP_AOSL__SEQUENCE_HPP

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

#include "aosl/sequence_forward.hpp"

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

#include "aosl/meta_forward.hpp"

#include "aosl/library_forward.hpp"

#include "aosl/canvas_forward.hpp"

#include "aosl/story_forward.hpp"

#include "aosl/unique_id_forward.hpp"

#undef XSD_DONT_INCLUDE_INLINE
#else

#include "aosl/meta_forward.hpp"

#include "aosl/library_forward.hpp"

#include "aosl/canvas_forward.hpp"

#include "aosl/story_forward.hpp"

#include "aosl/unique_id_forward.hpp"

#endif // XSD_DONT_INCLUDE_INLINE

/**
 * @brief C++ namespace for the %artofsequence.org/aosl/1.0
 * schema namespace.
 */
namespace aosl
{
  /**
   * @brief Class corresponding to the %sequence schema type.
   *
   * Root object representing a sequence.
   * It hold everything that is required to describe the full sequence
   * interpreted by the player.
   *
   * @nosubgrouping
   */
  class Sequence: public ::xml_schema::Type
  {
    public:
    /**
     * @name meta
     *
     * @brief Accessor and modifier functions for the %meta
     * optional element.
     *
     * Additional informations about the sequence.
     */
    //@{

    /**
     * @brief Element type.
     */
    typedef ::aosl::Meta MetaType;

    /**
     * @brief Element optional container type.
     */
    typedef ::xsd::cxx::tree::optional< MetaType > MetaOptional;

    /**
     * @brief Element traits type.
     */
    typedef ::xsd::cxx::tree::traits< MetaType, char > MetaTraits;

    /**
     * @brief Return a read-only (constant) reference to the element
     * container.
     *
     * @return A constant reference to the optional container.
     */
    const MetaOptional&
    meta () const;

    /**
     * @brief Return a read-write reference to the element container.
     *
     * @return A reference to the optional container.
     */
    MetaOptional&
    meta ();

    /**
     * @brief Set the element value.
     *
     * @param x A new value to set.
     *
     * This function makes a copy of its argument and sets it as
     * the new value of the element.
     */
    void
    meta (const MetaType& x);

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
    meta (const MetaOptional& x);

    /**
     * @brief Set the element value without copying.
     *
     * @param p A new value to use.
     *
     * This function will try to use the passed value directly instead
     * of making a copy.
     */
    void
    meta (::std::auto_ptr< MetaType > p);

    //@}

    /**
     * @name library
     *
     * @brief Accessor and modifier functions for the %library
     * required element.
     *
     * Library of resources used in this sequence.
     */
    //@{

    /**
     * @brief Element type.
     */
    typedef ::aosl::Library LibraryType;

    /**
     * @brief Element traits type.
     */
    typedef ::xsd::cxx::tree::traits< LibraryType, char > LibraryTraits;

    /**
     * @brief Return a read-only (constant) reference to the element.
     *
     * @return A constant reference to the element.
     */
    const LibraryType&
    library () const;

    /**
     * @brief Return a read-write reference to the element.
     *
     * @return A reference to the element.
     */
    LibraryType&
    library ();

    /**
     * @brief Set the element value.
     *
     * @param x A new value to set.
     *
     * This function makes a copy of its argument and sets it as
     * the new value of the element.
     */
    void
    library (const LibraryType& x);

    /**
     * @brief Set the element value without copying.
     *
     * @param p A new value to use.
     *
     * This function will try to use the passed value directly
     * instead of making a copy.
     */
    void
    library (::std::auto_ptr< LibraryType > p);

    /**
     * @brief Detach the element value from the object model.
     *
     * @return A pointer to the element value.
     *
     * Note that this function leaves the required element in 
     * the original object model uninitialized.
     */
    ::std::auto_ptr< LibraryType >
    detach_library ();

    //@}

    /**
     * @name canvas
     *
     * @brief Accessor and modifier functions for the %canvas
     * required element.
     *
     * Canvas where the sequence plays and that gives the objects'
     * organisation.
     */
    //@{

    /**
     * @brief Element type.
     */
    typedef ::aosl::Canvas CanvasType;

    /**
     * @brief Element traits type.
     */
    typedef ::xsd::cxx::tree::traits< CanvasType, char > CanvasTraits;

    /**
     * @brief Return a read-only (constant) reference to the element.
     *
     * @return A constant reference to the element.
     */
    const CanvasType&
    canvas () const;

    /**
     * @brief Return a read-write reference to the element.
     *
     * @return A reference to the element.
     */
    CanvasType&
    canvas ();

    /**
     * @brief Set the element value.
     *
     * @param x A new value to set.
     *
     * This function makes a copy of its argument and sets it as
     * the new value of the element.
     */
    void
    canvas (const CanvasType& x);

    /**
     * @brief Set the element value without copying.
     *
     * @param p A new value to use.
     *
     * This function will try to use the passed value directly
     * instead of making a copy.
     */
    void
    canvas (::std::auto_ptr< CanvasType > p);

    /**
     * @brief Detach the element value from the object model.
     *
     * @return A pointer to the element value.
     *
     * Note that this function leaves the required element in 
     * the original object model uninitialized.
     */
    ::std::auto_ptr< CanvasType >
    detach_canvas ();

    //@}

    /**
     * @name story
     *
     * @brief Accessor and modifier functions for the %story
     * required element.
     *
     * Description of the structure of the sequence.
     */
    //@{

    /**
     * @brief Element type.
     */
    typedef ::aosl::Story StoryType;

    /**
     * @brief Element traits type.
     */
    typedef ::xsd::cxx::tree::traits< StoryType, char > StoryTraits;

    /**
     * @brief Return a read-only (constant) reference to the element.
     *
     * @return A constant reference to the element.
     */
    const StoryType&
    story () const;

    /**
     * @brief Return a read-write reference to the element.
     *
     * @return A reference to the element.
     */
    StoryType&
    story ();

    /**
     * @brief Set the element value.
     *
     * @param x A new value to set.
     *
     * This function makes a copy of its argument and sets it as
     * the new value of the element.
     */
    void
    story (const StoryType& x);

    /**
     * @brief Set the element value without copying.
     *
     * @param p A new value to use.
     *
     * This function will try to use the passed value directly
     * instead of making a copy.
     */
    void
    story (::std::auto_ptr< StoryType > p);

    /**
     * @brief Detach the element value from the object model.
     *
     * @return A pointer to the element value.
     *
     * Note that this function leaves the required element in 
     * the original object model uninitialized.
     */
    ::std::auto_ptr< StoryType >
    detach_story ();

    //@}

    /**
     * @name name
     *
     * @brief Accessor and modifier functions for the %name
     * required attribute.
     *
     * Name of the Sequence.
     * Can be used as a default title by the player.
     */
    //@{

    /**
     * @brief Attribute type.
     */
    typedef ::xml_schema::String NameType;

    /**
     * @brief Attribute traits type.
     */
    typedef ::xsd::cxx::tree::traits< NameType, char > NameTraits;

    /**
     * @brief Return a read-only (constant) reference to the attribute.
     *
     * @return A constant reference to the attribute.
     */
    const NameType&
    name () const;

    /**
     * @brief Return a read-write reference to the attribute.
     *
     * @return A reference to the attribute.
     */
    NameType&
    name ();

    /**
     * @brief Set the attribute value.
     *
     * @param x A new value to set.
     *
     * This function makes a copy of its argument and sets it as
     * the new value of the attribute.
     */
    void
    name (const NameType& x);

    /**
     * @brief Set the attribute value without copying.
     *
     * @param p A new value to use.
     *
     * This function will try to use the passed value directly
     * instead of making a copy.
     */
    void
    name (::std::auto_ptr< NameType > p);

    /**
     * @brief Detach the attribute value from the object model.
     *
     * @return A pointer to the attribute value.
     *
     * Note that this function leaves the required attribute in 
     * the original object model uninitialized.
     */
    ::std::auto_ptr< NameType >
    detach_name ();

    //@}

    /**
     * @name id
     *
     * @brief Accessor and modifier functions for the %id
     * required attribute.
     *
     * Identifier of the Sequence.
     * Used by tools manipulating AOSL files to identify them.
     */
    //@{

    /**
     * @brief Attribute type.
     */
    typedef ::aosl::Unique_id IdType;

    /**
     * @brief Attribute traits type.
     */
    typedef ::xsd::cxx::tree::traits< IdType, char > IdTraits;

    /**
     * @brief Return a read-only (constant) reference to the attribute.
     *
     * @return A constant reference to the attribute.
     */
    const IdType&
    id () const;

    /**
     * @brief Return a read-write reference to the attribute.
     *
     * @return A reference to the attribute.
     */
    IdType&
    id ();

    /**
     * @brief Set the attribute value.
     *
     * @param x A new value to set.
     *
     * This function makes a copy of its argument and sets it as
     * the new value of the attribute.
     */
    void
    id (const IdType& x);

    /**
     * @brief Set the attribute value without copying.
     *
     * @param p A new value to use.
     *
     * This function will try to use the passed value directly
     * instead of making a copy.
     */
    void
    id (::std::auto_ptr< IdType > p);

    /**
     * @brief Detach the attribute value from the object model.
     *
     * @return A pointer to the attribute value.
     *
     * Note that this function leaves the required attribute in 
     * the original object model uninitialized.
     */
    ::std::auto_ptr< IdType >
    detach_id ();

    //@}

    /**
     * @name Constructors
     */
    //@{

    /**
     * @brief Create an instance from the ultimate base and
     * initializers for required elements and attributes.
     */
    Sequence (const LibraryType&,
              const CanvasType&,
              const StoryType&,
              const NameType&,
              const IdType&);

    /**
     * @brief Create an instance from the ultimate base and
     * initializers for required elements and attributes
     * (auto_ptr version).
     *
     * This constructor will try to use the passed values directly
     * instead of making copies.
     */
    Sequence (::std::auto_ptr< LibraryType >&,
              ::std::auto_ptr< CanvasType >&,
              ::std::auto_ptr< StoryType >&,
              const NameType&,
              const IdType&);

    /**
     * @brief Create an instance from a DOM element.
     *
     * @param e A DOM element to extract the data from.
     * @param f Flags to create the new instance with.
     * @param c A pointer to the object that will contain the new
     * instance.
     */
    Sequence (const ::xercesc::DOMElement& e,
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
    Sequence (const Sequence& x,
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
    virtual Sequence*
    _clone (::xml_schema::Flags f = 0,
            ::xml_schema::Container* c = 0) const;

    //@}

    /**
     * @brief Destructor.
     */
    virtual 
    ~Sequence ();

    // Implementation.
    //

    //@cond

    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::Flags);

    protected:
    MetaOptional meta_;
    ::xsd::cxx::tree::one< LibraryType > library_;
    ::xsd::cxx::tree::one< CanvasType > canvas_;
    ::xsd::cxx::tree::one< StoryType > story_;
    ::xsd::cxx::tree::one< NameType > name_;
    ::xsd::cxx::tree::one< IdType > id_;

    //@endcond
  };

  bool
  operator== (const Sequence&, const Sequence&);

  bool
  operator!= (const Sequence&, const Sequence&);
}

#ifndef XSD_DONT_INCLUDE_INLINE

#include "aosl/meta.hpp"
#include "aosl/meta.inl"

#include "aosl/library.hpp"
#include "aosl/library.inl"

#include "aosl/canvas.hpp"
#include "aosl/canvas.inl"

#include "aosl/story.hpp"
#include "aosl/story.inl"

#include "aosl/unique_id.hpp"
#include "aosl/unique_id.inl"

#endif // XSD_DONT_INCLUDE_INLINE

#include <iosfwd>

namespace aosl
{
  ::std::ostream&
  operator<< (::std::ostream&, const Sequence&);
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
  operator<< (::xercesc::DOMElement&, const Sequence&);
}

#ifndef XSD_DONT_INCLUDE_INLINE
#include "aosl/sequence.inl"
#endif // XSD_DONT_INCLUDE_INLINE

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // AOSLCPP_AOSL__SEQUENCE_HPP