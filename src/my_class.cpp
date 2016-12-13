/*
 * myclass.cpp
 *
 *  Created on: Dec 12, 2016
 *      Author: mjlopez
 */

#include "my_class.h"

namespace cff = ctest_for_fun;

cff::my_class::my_class(int x)
: _x(x)
{
}

std::ostream& operator <<(
    std::ostream& stream,
    const ctest_for_fun::my_class& obj) {
  stream << "x=" << obj.get_x();
  return stream;
}

int ctest_for_fun::my_class::get_x() const {
  return _x;
}
