#include <iostream>

int five()
{
  return 5;
}

int main()
{
  constexpr double gravity{9.8}; // ok: 9.8 is a constant expression
  constexpr int sum{4 + 5};      // ok, since 4+5 is a constant expression
  constexpr int something{sum};  // ok, since sum is a constant expression

  std::cout << "Enter your age: ";
  int age{};
  std::cin >> age;

  int myAge{age}; // If I prefix with 'constexpr', it is not ok, since age is not a constant expression

  int f{five()}; // If I prefix with 'constexpr' it is not ok, since five() is not a constant expression

  std::cout << gravity << '\n';
  std::cout << sum << '\n';
  std::cout << something << '\n';
  std::cout << myAge << '\n';
  std::cout << f << '\n';

  return 0;
}
