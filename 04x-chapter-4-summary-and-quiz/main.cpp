#include "askUserToGiveDouble.h"
#include "askMathematicalSymbol.h"
#include <iostream>

int main()
{
  double a{askUserToGiveDouble()};
  double b{askUserToGiveDouble()};
  char c{askMathematicalSymbol()};

  if (c != '+' && c != '-' && c != '/' && c != '*')
    return 1;

  double answer{computeAnswer(a, b, c)};

  std::cout << "Answer is " << answer << '\n';

  return 0;
}
