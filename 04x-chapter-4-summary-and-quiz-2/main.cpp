#include "askTowerHeight.h"
#include "calculateAndPrintHeightOfBall.h"
#include <iostream>

int main()
{
  double height{askTowerHeight()};

  for (int seconds = 0; seconds <= 5; seconds++)
  {
    calculateAndPrintHeightOfBall(height, seconds);
  }

  return 0;
}
