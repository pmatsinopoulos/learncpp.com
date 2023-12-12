#include <iostream>

int main()
{
  std::cout << "Enter an integer: ";

  int first_operand { 0 };

  std::cin >> first_operand;

  std::cout << "Double " << first_operand << " is: " << first_operand * 2 << '\n';

  std::cout << "Triple " << first_operand << " is: " << first_operand * 3 << '\n';

  return 0;
}
