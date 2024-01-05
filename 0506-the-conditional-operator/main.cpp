#include <iostream>

int main()
{
  constexpr bool inBigClassroom{false};
  constexpr int classSize{inBigClassroom ? 30 : 20};
  std::cout << "The class size is: " << classSize << '\n';

  constexpr int x{5}; // this could have been a constexpr

  std::cout << (x != 5 ? std::to_string(x) : std::string{"x is 5"}) << '\n';

  if (x != 5)
  {
    std::cout << x << '\n';
  }
  else
  {
    std::cout << "x is 5" << '\n';
  }

  return 0;
}
