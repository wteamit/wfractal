#include "stdafx.hpp"
#include "Fractal/Variable.hpp"

///////////////////////////////////////////////////////////////////////////////
// USING SECTION                                                             //
///////////////////////////////////////////////////////////////////////////////

using WFractal::Fractal::Variable;
using std::wstring;

///////////////////////////////////////////////////////////////////////////////
// TEST SECTION                                                              //
///////////////////////////////////////////////////////////////////////////////

BOOST_AUTO_TEST_SUITE(VariableTest);

BOOST_AUTO_TEST_CASE(DefaultConstructor) {
  Variable variable;
  wstring defaultValue;
  BOOST_CHECK(variable.getName() == defaultValue);
}

BOOST_AUTO_TEST_CASE(NameConstructor) {
  wstring name(L"VariableName");
  Variable variable(name);
  BOOST_CHECK(variable.getName() == name);
}

BOOST_AUTO_TEST_CASE(CopyConstructor) {
  wstring name(L"variableName");
  Variable variable1(name);
  Variable variable2(variable1);
  BOOST_CHECK(variable1.getName() == variable2.getName());
  BOOST_CHECK(variable1.getName() == name);
}

BOOST_AUTO_TEST_CASE(SetName) {
  wstring name(L"variableName");
  Variable variable;
  variable.setName(name);
  BOOST_CHECK(variable.getName() == name);
}

BOOST_AUTO_TEST_SUITE_END();

