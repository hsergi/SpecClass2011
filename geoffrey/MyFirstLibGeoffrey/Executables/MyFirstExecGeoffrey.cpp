#include <iostream>
#include <cstdlib>

#include "MyFirstLibGeoffrey.hpp"

int main(int /*argc*/, char** /*argv*/) {
  std::cout << "Hello world!" << std::endl;

  double x = 4.5;
  double cap = 4.0;
  double x_capped = ImposeCap(x,cap);

  std::cout << "x is " << x << ", cap is " << cap << std::endl;
  std::cout << "The capped value of x is " << x_capped << std::endl;

  return EXIT_SUCCESS;
}
