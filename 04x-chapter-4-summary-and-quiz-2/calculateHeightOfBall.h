#pragma once

double calculateHeightOfBall(double towerHeight, int seconds)
{
  double result{0.0};
  double distanceFallen{0.0};
  const double GRAVITY = 9.8;

  distanceFallen = (GRAVITY * (seconds * seconds)) / 2.0;

  result = towerHeight - distanceFallen;

  if (result <= 0.0)
  {
    result = 0.0;
  }

  return result;
}
