#include <iostream>

int doubleNumber(int a)
{
  return a * 2;
}

int main()
{
  std::cout << "Give me an integer: ";
  int a { };
  std::cin >> a;

  std::cout << a << " double is: " << doubleNumber(a) << '\n';

  return 0;
}
