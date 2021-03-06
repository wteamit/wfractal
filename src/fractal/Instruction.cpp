#include "fractal/Instruction.hpp"

namespace WFractal {
namespace Fractal {

///////////////////////////////////////////////////////////////////////////////
// USING SECTION                                                             //
///////////////////////////////////////////////////////////////////////////////

using std::vector;

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

void Instruction::setParameters(const vector<Variable>& parameters) {
  m_parameters = parameters;
}

} // namespace Fractal
} // namespace WFractal

