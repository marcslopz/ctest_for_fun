/*
 * main.cpp
 *
 *  Created on: Dec 12, 2016
 *      Author: mjlopez
 */
#include <cstdlib>
#include <iostream>

#include "my_class.h"

namespace cff = ctest_for_fun;
int main(int argc, char** argv) {
  cff::my_class object(42);
  std::cout << "my_class: '" << object << "'" << std::endl;
  return EXIT_SUCCESS;
}


