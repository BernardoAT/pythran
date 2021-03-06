#ifndef PYTHONIC_INCLUDE_MATH_ATANH_HPP
#define PYTHONIC_INCLUDE_MATH_ATANH_HPP

#include "pythonic/include/utils/functor.hpp"
#include <cmath>

namespace pythonic
{

  namespace math
  {
    DECLARE_FUNCTOR_2(atanh, std::atanh);
  }
}

#endif
