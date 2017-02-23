// Copyright (c) 2005-2014 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "ConfigurationXMLSchema.h"

namespace asr_object_database
{
  // configuration
  // 

  const configuration::database_sequence& configuration::
  database () const
  {
    return this->database_;
  }

  configuration::database_sequence& configuration::
  database ()
  {
    return this->database_;
  }

  void configuration::
  database (const database_sequence& s)
  {
    this->database_ = s;
  }


  // database
  // 

  const database::uniqueName_type& database::
  uniqueName () const
  {
    return this->uniqueName_.get ();
  }

  database::uniqueName_type& database::
  uniqueName ()
  {
    return this->uniqueName_.get ();
  }

  void database::
  uniqueName (const uniqueName_type& x)
  {
    this->uniqueName_.set (x);
  }

  void database::
  uniqueName (::std::unique_ptr< uniqueName_type > x)
  {
    this->uniqueName_.set (std::move (x));
  }

  const database::basenameMatchPattern_type& database::
  basenameMatchPattern () const
  {
    return this->basenameMatchPattern_.get ();
  }

  database::basenameMatchPattern_type& database::
  basenameMatchPattern ()
  {
    return this->basenameMatchPattern_.get ();
  }

  void database::
  basenameMatchPattern (const basenameMatchPattern_type& x)
  {
    this->basenameMatchPattern_.set (x);
  }

  void database::
  basenameMatchPattern (::std::unique_ptr< basenameMatchPattern_type > x)
  {
    this->basenameMatchPattern_.set (std::move (x));
  }

  const database::objectDbRootFolder_type& database::
  objectDbRootFolder () const
  {
    return this->objectDbRootFolder_.get ();
  }

  database::objectDbRootFolder_type& database::
  objectDbRootFolder ()
  {
    return this->objectDbRootFolder_.get ();
  }

  void database::
  objectDbRootFolder (const objectDbRootFolder_type& x)
  {
    this->objectDbRootFolder_.set (x);
  }

  void database::
  objectDbRootFolder (::std::unique_ptr< objectDbRootFolder_type > x)
  {
    this->objectDbRootFolder_.set (std::move (x));
  }
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

namespace asr_object_database
{
  // configuration
  //

  configuration::
  configuration ()
  : ::xml_schema::type (),
    database_ (this)
  {
  }

  configuration::
  configuration (const configuration& x,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
  : ::xml_schema::type (x, f, c),
    database_ (x.database_, f, this)
  {
  }

  configuration::
  configuration (const ::xercesc::DOMElement& e,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
  : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
    database_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
      this->parse (p, f);
    }
  }

  void configuration::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    for (; p.more_content (); p.next_content (false))
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // database
      //
      if (n.name () == "database" && n.namespace_ () == "http://xml.ralfschleicher.de/asr_object_database/")
      {
        ::std::unique_ptr< database_type > r (
          database_traits::create (i, f, this));

        this->database_.push_back (::std::move (r));
        continue;
      }

      break;
    }
  }

  configuration* configuration::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class configuration (*this, f, c);
  }

  configuration& configuration::
  operator= (const configuration& x)
  {
    if (this != &x)
    {
      static_cast< ::xml_schema::type& > (*this) = x;
      this->database_ = x.database_;
    }

    return *this;
  }

  configuration::
  ~configuration ()
  {
  }

  // database
  //

  database::
  database (const uniqueName_type& uniqueName,
            const basenameMatchPattern_type& basenameMatchPattern,
            const objectDbRootFolder_type& objectDbRootFolder)
  : ::xml_schema::type (),
    uniqueName_ (uniqueName, this),
    basenameMatchPattern_ (basenameMatchPattern, this),
    objectDbRootFolder_ (objectDbRootFolder, this)
  {
  }

  database::
  database (const database& x,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xml_schema::type (x, f, c),
    uniqueName_ (x.uniqueName_, f, this),
    basenameMatchPattern_ (x.basenameMatchPattern_, f, this),
    objectDbRootFolder_ (x.objectDbRootFolder_, f, this)
  {
  }

  database::
  database (const ::xercesc::DOMElement& e,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
    uniqueName_ (this),
    basenameMatchPattern_ (this),
    objectDbRootFolder_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
      this->parse (p, f);
    }
  }

  void database::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    for (; p.more_content (); p.next_content (false))
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // uniqueName
      //
      if (n.name () == "uniqueName" && n.namespace_ () == "http://xml.ralfschleicher.de/asr_object_database/")
      {
        ::std::unique_ptr< uniqueName_type > r (
          uniqueName_traits::create (i, f, this));

        if (!uniqueName_.present ())
        {
          this->uniqueName_.set (::std::move (r));
          continue;
        }
      }

      // basenameMatchPattern
      //
      if (n.name () == "basenameMatchPattern" && n.namespace_ () == "http://xml.ralfschleicher.de/asr_object_database/")
      {
        ::std::unique_ptr< basenameMatchPattern_type > r (
          basenameMatchPattern_traits::create (i, f, this));

        if (!basenameMatchPattern_.present ())
        {
          this->basenameMatchPattern_.set (::std::move (r));
          continue;
        }
      }

      // objectDbRootFolder
      //
      if (n.name () == "objectDbRootFolder" && n.namespace_ () == "http://xml.ralfschleicher.de/asr_object_database/")
      {
        ::std::unique_ptr< objectDbRootFolder_type > r (
          objectDbRootFolder_traits::create (i, f, this));

        if (!objectDbRootFolder_.present ())
        {
          this->objectDbRootFolder_.set (::std::move (r));
          continue;
        }
      }

      break;
    }

    if (!uniqueName_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "uniqueName",
        "http://xml.ralfschleicher.de/asr_object_database/");
    }

    if (!basenameMatchPattern_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "basenameMatchPattern",
        "http://xml.ralfschleicher.de/asr_object_database/");
    }

    if (!objectDbRootFolder_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "objectDbRootFolder",
        "http://xml.ralfschleicher.de/asr_object_database/");
    }
  }

  database* database::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class database (*this, f, c);
  }

  database& database::
  operator= (const database& x)
  {
    if (this != &x)
    {
      static_cast< ::xml_schema::type& > (*this) = x;
      this->uniqueName_ = x.uniqueName_;
      this->basenameMatchPattern_ = x.basenameMatchPattern_;
      this->objectDbRootFolder_ = x.objectDbRootFolder_;
    }

    return *this;
  }

  database::
  ~database ()
  {
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace asr_object_database
{
  ::std::unique_ptr< ::asr_object_database::configuration >
  configuration_ (const ::std::string& u,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::tree::error_handler< char > h;

    ::xml_schema::dom::unique_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        u, h, p, f));

    h.throw_if_failed< ::xsd::cxx::tree::parsing< char > > ();

    return ::std::unique_ptr< ::asr_object_database::configuration > (
      ::asr_object_database::configuration_ (
        std::move (d), f | ::xml_schema::flags::own_dom, p));
  }

  ::std::unique_ptr< ::asr_object_database::configuration >
  configuration_ (const ::std::string& u,
                  ::xml_schema::error_handler& h,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xml_schema::dom::unique_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        u, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    return ::std::unique_ptr< ::asr_object_database::configuration > (
      ::asr_object_database::configuration_ (
        std::move (d), f | ::xml_schema::flags::own_dom, p));
  }

  ::std::unique_ptr< ::asr_object_database::configuration >
  configuration_ (const ::std::string& u,
                  ::xercesc::DOMErrorHandler& h,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
  {
    ::xml_schema::dom::unique_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        u, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    return ::std::unique_ptr< ::asr_object_database::configuration > (
      ::asr_object_database::configuration_ (
        std::move (d), f | ::xml_schema::flags::own_dom, p));
  }

  ::std::unique_ptr< ::asr_object_database::configuration >
  configuration_ (::std::istream& is,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is);
    return ::asr_object_database::configuration_ (isrc, f, p);
  }

  ::std::unique_ptr< ::asr_object_database::configuration >
  configuration_ (::std::istream& is,
                  ::xml_schema::error_handler& h,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is);
    return ::asr_object_database::configuration_ (isrc, h, f, p);
  }

  ::std::unique_ptr< ::asr_object_database::configuration >
  configuration_ (::std::istream& is,
                  ::xercesc::DOMErrorHandler& h,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::sax::std_input_source isrc (is);
    return ::asr_object_database::configuration_ (isrc, h, f, p);
  }

  ::std::unique_ptr< ::asr_object_database::configuration >
  configuration_ (::std::istream& is,
                  const ::std::string& sid,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
    return ::asr_object_database::configuration_ (isrc, f, p);
  }

  ::std::unique_ptr< ::asr_object_database::configuration >
  configuration_ (::std::istream& is,
                  const ::std::string& sid,
                  ::xml_schema::error_handler& h,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
    return ::asr_object_database::configuration_ (isrc, h, f, p);
  }

  ::std::unique_ptr< ::asr_object_database::configuration >
  configuration_ (::std::istream& is,
                  const ::std::string& sid,
                  ::xercesc::DOMErrorHandler& h,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
    return ::asr_object_database::configuration_ (isrc, h, f, p);
  }

  ::std::unique_ptr< ::asr_object_database::configuration >
  configuration_ (::xercesc::InputSource& i,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
  {
    ::xsd::cxx::tree::error_handler< char > h;

    ::xml_schema::dom::unique_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        i, h, p, f));

    h.throw_if_failed< ::xsd::cxx::tree::parsing< char > > ();

    return ::std::unique_ptr< ::asr_object_database::configuration > (
      ::asr_object_database::configuration_ (
        std::move (d), f | ::xml_schema::flags::own_dom, p));
  }

  ::std::unique_ptr< ::asr_object_database::configuration >
  configuration_ (::xercesc::InputSource& i,
                  ::xml_schema::error_handler& h,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
  {
    ::xml_schema::dom::unique_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        i, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    return ::std::unique_ptr< ::asr_object_database::configuration > (
      ::asr_object_database::configuration_ (
        std::move (d), f | ::xml_schema::flags::own_dom, p));
  }

  ::std::unique_ptr< ::asr_object_database::configuration >
  configuration_ (::xercesc::InputSource& i,
                  ::xercesc::DOMErrorHandler& h,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
  {
    ::xml_schema::dom::unique_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        i, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    return ::std::unique_ptr< ::asr_object_database::configuration > (
      ::asr_object_database::configuration_ (
        std::move (d), f | ::xml_schema::flags::own_dom, p));
  }

  ::std::unique_ptr< ::asr_object_database::configuration >
  configuration_ (const ::xercesc::DOMDocument& doc,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
  {
    if (f & ::xml_schema::flags::keep_dom)
    {
      ::xml_schema::dom::unique_ptr< ::xercesc::DOMDocument > d (
        static_cast< ::xercesc::DOMDocument* > (doc.cloneNode (true)));

      return ::std::unique_ptr< ::asr_object_database::configuration > (
        ::asr_object_database::configuration_ (
          std::move (d), f | ::xml_schema::flags::own_dom, p));
    }

    const ::xercesc::DOMElement& e (*doc.getDocumentElement ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (e));

    if (n.name () == "configuration" &&
        n.namespace_ () == "http://xml.ralfschleicher.de/asr_object_database/")
    {
      ::std::unique_ptr< ::asr_object_database::configuration > r (
        ::xsd::cxx::tree::traits< ::asr_object_database::configuration, char >::create (
          e, f, 0));
      return r;
    }

    throw ::xsd::cxx::tree::unexpected_element < char > (
      n.name (),
      n.namespace_ (),
      "configuration",
      "http://xml.ralfschleicher.de/asr_object_database/");
  }

  ::std::unique_ptr< ::asr_object_database::configuration >
  configuration_ (::xml_schema::dom::unique_ptr< ::xercesc::DOMDocument > d,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties&)
  {
    ::xml_schema::dom::unique_ptr< ::xercesc::DOMDocument > c (
      ((f & ::xml_schema::flags::keep_dom) &&
       !(f & ::xml_schema::flags::own_dom))
      ? static_cast< ::xercesc::DOMDocument* > (d->cloneNode (true))
      : 0);

    ::xercesc::DOMDocument& doc (c.get () ? *c : *d);
    const ::xercesc::DOMElement& e (*doc.getDocumentElement ());

    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (e));

    if (f & ::xml_schema::flags::keep_dom)
      doc.setUserData (::xml_schema::dom::tree_node_key,
                       (c.get () ? &c : &d),
                       0);

    if (n.name () == "configuration" &&
        n.namespace_ () == "http://xml.ralfschleicher.de/asr_object_database/")
    {
      ::std::unique_ptr< ::asr_object_database::configuration > r (
        ::xsd::cxx::tree::traits< ::asr_object_database::configuration, char >::create (
          e, f, 0));
      return r;
    }

    throw ::xsd::cxx::tree::unexpected_element < char > (
      n.name (),
      n.namespace_ (),
      "configuration",
      "http://xml.ralfschleicher.de/asr_object_database/");
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.
