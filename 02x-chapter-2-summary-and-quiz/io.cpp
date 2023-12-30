#include "io.h"
#include <iostream>

int readNumber()
{
  int result { 0 };

  std::cin >> result;

  return result;
}

void writeAnswer(int answer)
{
  std::cout << answer << '\n';
}
