#ifndef WFRACTAL_FRACTAL_FRACTALGLOBAL_H_
#define WFRACTAL_FRACTAL_FRACTALGLOBAL_H_

#include <boost/config.hpp>

#ifdef BOOST_HAS_DECLSPEC
# ifdef FRACTAL_EXPORTS
#  define FRACTAL_LIB __declspec(dllexport)
# else
#  define FRACTAL_LIB __declspec(dllimport)
# endif
#endif
#ifndef FRACTAL_LIB
# define FRACTAL_LIB
#endif

#endif // !WFRACTAL_FRACTAL_FRACTALGLOBAL_H_

