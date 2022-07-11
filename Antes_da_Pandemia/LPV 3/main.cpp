#include <iostream>

#include "Reader.h"

int main() {
  Reader reader;
  while (reader.readNext()) {
  }
  std::cout << reader.getNumReals() << ", " << reader.getNumInts() << ", "
    << reader.getNumOthers() << std::endl;
  return 0;
}