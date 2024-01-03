#include "askTowerHeight.h"
#include <iostream>

double askTowerHeight()
{
  double result{0.0};

  std::cout << "Enter the height of the tower in meters: ";

  std::cin >> result;

  return result;
}
