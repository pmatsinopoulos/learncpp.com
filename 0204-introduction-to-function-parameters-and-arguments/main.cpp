#include <iostream>

int getValueFromUser()
{
  std::cout << "Enter an integer: ";
  int input { };
  std::cin >> input;

  return input;
}

void printDouble(int num)
{
  std::cout << num << " doubled is: " << num * 2 << '\n';
}

int main()
{
  printDouble(getValueFromUser());

  return 0;
}
