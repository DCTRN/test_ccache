#include "ConcreteHandler1.hpp"

#include <iostream>

void ConcreteHandler1::handle() {
  std::cout << "I am gonna count to 300" << std::endl;

  for (int i = 1; i <= 300; i++) {
    std::cout << i << ",";
  }
  std::cout << std::endl;
}