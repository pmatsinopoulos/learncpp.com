#include "askMathematicalSymbol.h"
#include <iostream>

char askMathematicalSymbol()
{
  char result{};
  std::cout << "Give me the symbol: ";
  std::cin >> result;

  return result;
}
