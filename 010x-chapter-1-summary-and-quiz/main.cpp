#include <iostream>

int main()
{
  std::cout << "Enter an integer: ";

  int first_operand { };
  std::cin >> first_operand;

  std::cout << "Enter another integer: ";

  int second_operand { };
  std::cin >> second_operand;

  std::cout << first_operand << " + " << second_operand << " is " << first_operand + second_operand << '\n';
  std::cout << first_operand << " - " << second_operand << " is " << first_operand - second_operand << '\n';

  return 0;
}
