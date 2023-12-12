#include <iostream>

// five() is a function that returns the value 5
int five()
{
  return 5;
}

int main()
{
  int a { 2 };
  int b { 2 + 3 };
  int c { 2 * 3 + 4 };
  int d { b };
  int e { five() };

  std::cout << "a = " << a << '\n';
  std::cout << "b = " << b << '\n';
  std::cout << "c = " << c << '\n';
  std::cout << "d = " << d << '\n';
  std::cout << "e = " << e << '\n';

  return 0;
}
