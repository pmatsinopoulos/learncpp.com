#include "computeAnswer.h"
#include <cassert>

double computeAnswer(double a, double b, char symbol)
{
  assert(symbol == '+' || symbol == '-' || symbol == '/' || symbol == '*');

  if (symbol == '+')
  {
    return a + b;
  }
  if (symbol == '-')
  {
    return a - b;
  }
  if (symbol == '*')
  {
    return a * b;
  }
  if (symbol == '/')
  {
    return a / b;
  }

  return 0.0;
}
