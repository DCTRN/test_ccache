#include <iostream>

#include "ConcreteHandler1.hpp"
#include "ConcreteHandler2.hpp"
#include "ConcreteHandler3.hpp"

int main() {
  std::cout << "Starting program..." << std::endl;
  ConcreteHandler1 concreteHandler1{};
  ConcreteHandler2 concreteHandler2{};
  ConcreteHandler3 concreteHandler3{};

  concreteHandler1.handle();
  concreteHandler2.handle();
  concreteHandler3.handle();

  return 0;
}
