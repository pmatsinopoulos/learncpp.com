#include "askUserToGiveDouble.h"
#include <iostream>

double askUserToGiveDouble()
{
  double result{0.0};

  std::cout << "Give me a double: ";
  std::cin >> result;

  return result;
}
