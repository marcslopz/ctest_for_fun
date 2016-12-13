/*
 * unit_test.cpp
 *
 *  Created on: Dec 12, 2016
 *      Author: mjlopez
 */

#include <cassert>
#include <cstdlib>
#include <iostream>

#include "my_class.h"

namespace cff = ctest_for_fun;
int main(int argc, char** argv) {
  cff::my_class obj(42);
  assert(obj.get_x() == 42);
  std::cout << "success!!" << std::endl;
  return EXIT_SUCCESS;
}


