/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef incl_HPHP_TEST_EXT_DOMDOCUMENT_H_
#define incl_HPHP_TEST_EXT_DOMDOCUMENT_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include "hphp/test/test_cpp_ext.h"

///////////////////////////////////////////////////////////////////////////////

class TestExtDomdocument : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_DOMNode();
  bool test_DOMAttr();
  bool test_DOMCharacterData();
  bool test_DOMComment();
  bool test_DOMText();
  bool test_DOMCdataSection();
  bool test_DOMDocument();
  bool test_DOMDocumentFragment();
  bool test_DOMDocumentType();
  bool test_DOMElement();
  bool test_DOMEntity();
  bool test_DOMEntityReference();
  bool test_DOMNotation();
  bool test_DOMProcessingInstruction();
  bool test_DOMNamedNodeMap();
  bool test_DOMNodeList();
  bool test_DOMException();
  bool test_DOMImplementation();
  bool test_DOMXPath();
};

///////////////////////////////////////////////////////////////////////////////

#endif // incl_HPHP_TEST_EXT_DOMDOCUMENT_H_
