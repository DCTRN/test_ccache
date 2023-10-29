#include "ConcreteHandler2.hpp"

#include <iostream>

void ConcreteHandler2::handle() {
  std::cout << "I am gonna count to 100" << std::endl;

  for (int i = 1; i <= 100; i++) {
    std::cout << i << ",";
  }
  std::cout << std::endl;
}