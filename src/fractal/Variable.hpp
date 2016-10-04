#ifndef WFRACTAL_FRACTAL_VARIABLE_H_
#define WFRACTAL_FRACTAL_VARIABLE_H_

#include "fractal/FractalGlobal.hpp"
#include <memory>
#include <string>

namespace WFractal {
namespace Fractal {

class FRACTAL_LIB Variable {
public:

  typedef std::shared_ptr<Variable> Ptr;

public:

  Variable() = default;
  Variable(const std::wstring& name);
  Variable(const Variable& other) = default;
  void setName(const std::wstring& name);
  const std::wstring& getName() const;

protected:

  std::wstring m_name;
};

} // namespace Fractal
} // namespace WFractal

#endif // !WFRACTAL_FRACTAL_VARIABLE_H_

