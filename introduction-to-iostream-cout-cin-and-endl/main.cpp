#include <iostream>

int main()
{
  std::cout << "Enter a number: ";

  int x { }; // value initialization (to 0)
  std::cin >> x;

  std::cout << "You entered " << x << '\n';

  return 0;
}
