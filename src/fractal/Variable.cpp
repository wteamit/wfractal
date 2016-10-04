#include "fractal/Variable.hpp"

namespace WFractal {
namespace Fractal {

///////////////////////////////////////////////////////////////////////////////
// USING SECTION                                                             //
///////////////////////////////////////////////////////////////////////////////

using std::wstring;

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

Variable::Variable(const wstring& name) :
  m_name(name) {

}

void Variable::setName(const wstring& name) {
  m_name = name;
}

const wstring& Variable::getName() const {
  return m_name;
}

} // namespace Fractal
} // namespace WFractal

