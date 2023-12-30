#include <iostream>

int add(int a, int b)
{
  return a + b;
}

int add(int a, int b)
{
  return a + b;
}

int main()
{
  int x{};
  int x{ 5 }; // violation of ODR, we've already defined x

  return 0;
}
