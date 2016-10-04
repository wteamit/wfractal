#ifndef WFRACTAL_FRACTAL_INSTRUCTION_H_
#define WFRACTAL_FRACTAL_INSTRUCTION_H_

#include "fractal/Variable.hpp"
#include <memory>
#include <vector>

namespace WFractal {
namespace Fractal {

class Instruction {
public:

  typedef std::shared_ptr<Instruction> Ptr;

public:

  virtual Variable getResult() const = 0;
  void setParameters(const std::vector<Variable>& parameters);

protected:

  std::vector<Variable> m_parameters;
};

} // namespace Fractal
} // namespace WFractal

#endif // !WFRACTAL_FRACTAL_INSTRUCTION_H_

