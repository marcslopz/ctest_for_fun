/*
 * myclass.h
 *
 *  Created on: Dec 12, 2016
 *      Author: mjlopez
 */

#pragma once

#include <iostream>

namespace ctest_for_fun {

class my_class {
public:
  explicit my_class(int x);

  int get_x() const;
private:
  int _x;
};

} /* namespace ctest_for_fun */

std::ostream& operator<<(std::ostream&, const ctest_for_fun::my_class&);
