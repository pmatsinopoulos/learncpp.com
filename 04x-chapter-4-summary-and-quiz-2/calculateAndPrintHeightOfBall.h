#pragma once

#include "calculateHeightOfBall.h"
#include <iostream>

void calculateAndPrintHeightOfBall(double towerHeight, int seconds)
{
  double heightOfBall{calculateHeightOfBall(towerHeight, seconds)};

  std::cout << "At " << seconds << " seconds, the ball is ";

  if (heightOfBall == 0.0)
  {
    std::cout << "on the ground" << '\n';
  }
  else
  {
    std::cout << " at height: " << heightOfBall << '\n';
  }
}
