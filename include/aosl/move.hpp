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
 * @brief Generated from move.xsd.
 */

#ifndef AOSLCPP_AOSL__MOVE_HPP
#define AOSLCPP_AOSL__MOVE_HPP

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

#include "aosl/move_forward.hpp"

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

#include "aosl/change_forward.hpp"

#include "aosl/extension_forward.hpp"

#include "aosl/stage_ref_list_forward.hpp"

#include "aosl/unique_stage_ref_forward.hpp"

#include "aosl/move_id_forward.hpp"

#undef XSD_DONT_INCLUDE_INLINE
#else

#include "aosl/change_forward.hpp"

#include "aosl/extension_forward.hpp"

#include "aosl/stage_ref_list_forward.hpp"

#include "aosl/unique_stage_ref_forward.hpp"

#include "aosl/move_id_forward.hpp"

#endif // XSD_DONT_INCLUDE_INLINE

/**
 * @brief C++ namespace for the %artofsequence.org/aosl/1.0
 * schema namespace.
 */
namespace aosl
{
  /**
   * @brief Class corresponding to the %move schema type.
   *
   * A Move is a set of Changes between two Stages applied to Objects in
   * the Canvas.
   * A Move is to a Story what an edge is to an oriented graph.
   * There can be as many Moves in a Story as combinations possibles of a
   * pair of different Stages in the Story, but no more.
   * Therefore, a Move will contain as many Changes necessaries to apply
   * between two Stages and should be unique for this pair of Stages.
   * A move can reference several sources stages to move from, but only one
   * unique target stage to go to.
   *
   * @nosubgrouping
   */
  class Move: public ::xml_schema::Type
  {
    public:
    /**
     * @name change
     *
     * @brief Accessor and modifier functions for the %change
     * sequence element.
     *
     * Generic or specific type of change.
     */
    //@{

    /**
     * @brief Element type.
     */
    typedef ::aosl::Change ChangeType;

    /**
     * @brief Element sequence container type.
     */
    typedef ::xsd::cxx::tree::sequence< ChangeType > ChangeSequence;

    /**
     * @brief Element iterator type.
     */
    typedef ChangeSequence::iterator ChangeIterator;

    /**
     * @brief Element constant iterator type.
     */
    typedef ChangeSequence::const_iterator ChangeConstIterator;

    /**
     * @brief Element traits type.
     */
    typedef ::xsd::cxx::tree::traits< ChangeType, char > ChangeTraits;

    /**
     * @brief Return a read-only (constant) reference to the element
     * sequence.
     *
     * @return A constant reference to the sequence container.
     */
    const ChangeSequence&
    change () const;

    /**
     * @brief Return a read-write reference to the element sequence.
     *
     * @return A reference to the sequence container.
     */
    ChangeSequence&
    change ();

    /**
     * @brief Copy elements from a given sequence.
     *
     * @param s A sequence to copy elements from.
     *
     * For each element in @a s this function makes a copy and adds it 
     * to the sequence. Note that this operation completely changes the 
     * sequence and all old elements will be lost.
     */
    void
    change (const ChangeSequence& s);

    //@}

    /**
     * @name extension
     *
     * @brief Accessor and modifier functions for the %extension
     * optional element.
     *
     * Interpreter-related additional informations.
     */
    //@{

    /**
     * @brief Element type.
     */
    typedef ::aosl::Extension ExtensionType;

    /**
     * @brief Element optional container type.
     */
    typedef ::xsd::cxx::tree::optional< ExtensionType > ExtensionOptional;

    /**
     * @brief Element traits type.
     */
    typedef ::xsd::cxx::tree::traits< ExtensionType, char > ExtensionTraits;

    /**
     * @brief Return a read-only (constant) reference to the element
     * container.
     *
     * @return A constant reference to the optional container.
     */
    const ExtensionOptional&
    extension () const;

    /**
     * @brief Return a read-write reference to the element container.
     *
     * @return A reference to the optional container.
     */
    ExtensionOptional&
    extension ();

    /**
     * @brief Set the element value.
     *
     * @param x A new value to set.
     *
     * This function makes a copy of its argument and sets it as
     * the new value of the element.
     */
    void
    extension (const ExtensionType& x);

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
    extension (const ExtensionOptional& x);

    /**
     * @brief Set the element value without copying.
     *
     * @param p A new value to use.
     *
     * This function will try to use the passed value directly instead
     * of making a copy.
     */
    void
    extension (::std::auto_ptr< ExtensionType > p);

    //@}

    /**
     * @name from
     *
     * @brief Accessor and modifier functions for the %from
     * required attribute.
     *
     * Id of the Stage to move from.
     * Several stages can be referenced in the case this same move
     * should to be possible from several stages.
     * Automatic search of stage refs can be used too.
     */
    //@{

    /**
     * @brief Attribute type.
     */
    typedef ::aosl::Stage_ref_list FromType;

    /**
     * @brief Attribute traits type.
     */
    typedef ::xsd::cxx::tree::traits< FromType, char > FromTraits;

    /**
     * @brief Return a read-only (constant) reference to the attribute.
     *
     * @return A constant reference to the attribute.
     */
    const FromType&
    from () const;

    /**
     * @brief Return a read-write reference to the attribute.
     *
     * @return A reference to the attribute.
     */
    FromType&
    from ();

    /**
     * @brief Set the attribute value.
     *
     * @param x A new value to set.
     *
     * This function makes a copy of its argument and sets it as
     * the new value of the attribute.
     */
    void
    from (const FromType& x);

    /**
     * @brief Set the attribute value without copying.
     *
     * @param p A new value to use.
     *
     * This function will try to use the passed value directly
     * instead of making a copy.
     */
    void
    from (::std::auto_ptr< FromType > p);

    //@}

    /**
     * @name to
     *
     * @brief Accessor and modifier functions for the %to
     * required attribute.
     *
     * Id of the Stage to move to. 
     * Special search ids are forbidden.
     * Only one stage can be the target of a move.
     */
    //@{

    /**
     * @brief Attribute type.
     */
    typedef ::aosl::Unique_stage_ref ToType;

    /**
     * @brief Attribute traits type.
     */
    typedef ::xsd::cxx::tree::traits< ToType, char > ToTraits;

    /**
     * @brief Return a read-only (constant) reference to the attribute.
     *
     * @return A constant reference to the attribute.
     */
    const ToType&
    to () const;

    /**
     * @brief Return a read-write reference to the attribute.
     *
     * @return A reference to the attribute.
     */
    ToType&
    to ();

    /**
     * @brief Set the attribute value.
     *
     * @param x A new value to set.
     *
     * This function makes a copy of its argument and sets it as
     * the new value of the attribute.
     */
    void
    to (const ToType& x);

    /**
     * @brief Set the attribute value without copying.
     *
     * @param p A new value to use.
     *
     * This function will try to use the passed value directly
     * instead of making a copy.
     */
    void
    to (::std::auto_ptr< ToType > p);

    //@}

    /**
     * @name id
     *
     * @brief Accessor and modifier functions for the %id
     * required attribute.
     *
     * Id of this Move.
     */
    //@{

    /**
     * @brief Attribute type.
     */
    typedef ::aosl::Move_id IdType;

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

    //@}

    /**
     * @name default
     *
     * @brief Accessor and modifier functions for the %default
     * optional attribute with a default value.
     *
     * Define this move as the one the interpreter have to go through when it
     * is deciding automatically
     * which move to take from the stage this move is attached to.
     * For example, if the interpreter is commanded to go "next" but there is
     * several moves from which
     * the current stage can go through, the one marked "default" should be
     * the one choosen.
     * Having more than one move being default is invalid.
     */
    //@{

    /**
     * @brief Attribute type.
     */
    typedef ::xml_schema::Boolean DefaultType;

    /**
     * @brief Attribute traits type.
     */
    typedef ::xsd::cxx::tree::traits< DefaultType, char > DefaultTraits;

    /**
     * @brief Return a read-only (constant) reference to the attribute.
     *
     * @return A constant reference to the attribute.
     */
    const DefaultType&
    default_ () const;

    /**
     * @brief Return a read-write reference to the attribute.
     *
     * @return A reference to the attribute.
     */
    DefaultType&
    default_ ();

    /**
     * @brief Set the attribute value.
     *
     * @param x A new value to set.
     *
     * This function makes a copy of its argument and sets it as
     * the new value of the attribute.
     */
    void
    default_ (const DefaultType& x);

    /**
     * @brief Return the default value for the attribute.
     *
     * @return The attribute's default value.
     */
    static DefaultType
    default_default_value ();

    //@}

    /**
     * @name Constructors
     */
    //@{

    /**
     * @brief Default constructor.
     *
     * Note that this constructor leaves required elements and
     * attributes uninitialized.
     */
    Move ();

    /**
     * @brief Create an instance from the ultimate base and
     * initializers for required elements and attributes.
     */
    Move (const FromType&,
          const ToType&,
          const IdType&);

    /**
     * @brief Create an instance from a DOM element.
     *
     * @param e A DOM element to extract the data from.
     * @param f Flags to create the new instance with.
     * @param c A pointer to the object that will contain the new
     * instance.
     */
    Move (const ::xercesc::DOMElement& e,
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
    Move (const Move& x,
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
    virtual Move*
    _clone (::xml_schema::Flags f = 0,
            ::xml_schema::Container* c = 0) const;

    //@}

    /**
     * @brief Destructor.
     */
    virtual 
    ~Move ();

    // Implementation.
    //

    //@cond

    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::Flags);

    protected:
    ChangeSequence change_;
    ExtensionOptional extension_;
    ::xsd::cxx::tree::one< FromType > from_;
    ::xsd::cxx::tree::one< ToType > to_;
    ::xsd::cxx::tree::one< IdType > id_;
    ::xsd::cxx::tree::one< DefaultType > default__;

    //@endcond
  };

  bool
  operator== (const Move&, const Move&);

  bool
  operator!= (const Move&, const Move&);
}

#ifndef XSD_DONT_INCLUDE_INLINE

#include "aosl/change.hpp"
#include "aosl/change.inl"

#include "aosl/extension.hpp"
#include "aosl/extension.inl"

#include "aosl/stage_ref_list.hpp"
#include "aosl/stage_ref_list.inl"

#include "aosl/unique_stage_ref.hpp"
#include "aosl/unique_stage_ref.inl"

#include "aosl/move_id.hpp"
#include "aosl/move_id.inl"

#endif // XSD_DONT_INCLUDE_INLINE

#include <iosfwd>

namespace aosl
{
  ::std::ostream&
  operator<< (::std::ostream&, const Move&);
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
  operator<< (::xercesc::DOMElement&, const Move&);
}

#ifndef XSD_DONT_INCLUDE_INLINE
#include "aosl/move.inl"
#endif // XSD_DONT_INCLUDE_INLINE

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // AOSLCPP_AOSL__MOVE_HPP
