#include <iostream>

int main()
{
  std::cout << "Enter two numbers separated by a space: ";

  int x { }; // value initialization
  int y { }; // value initialization
  std::cin >> x >> y;

  std::cout << "You entered x = " << x << ", y = " << y << '\n';

  return 0;
}
