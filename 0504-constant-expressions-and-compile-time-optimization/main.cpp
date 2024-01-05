#include <iostream>

int getNumber()
{
  std::cout << "Enter a number: ";
  int y{};

  std::cin >> y;

  return y;
}

int main()
{
  // Non-const variables. This may be evaluated at compile time or runtime.
  int a{5};            // 5 is a constant expression
  double b{1.2 + 3.4}; // 1.2 + 3.4 is a constant expression. This may be evaluated at compile time or runtime.

  // Const integral variables with a constant expression initializer
  // are compile-time constants:
  const int c{5};      // 5 is a constant expression - 4 bytes
  const int d{c};      // c is a constant expression - 4 bytes
  const long e{c + 2}; // c + 2 is a constant expression - 8 bytes

  // Other const variables which are run-time constants, so they cannot be optimized at compile time.
  const int f{a};           // a is not a constant expression
  const int g{a + 1};       // a + 1 is not a constant expression
  const long h{a + c};      // a + c is not a constant expression
  const int i{getNumber()}; // getNumber() is not a constant expression

  const double j{b};   // b is not a constant expression
  const double k{1.2}; // 1.2 is a constant expression but "1.2" is a double

  return 0;
}
