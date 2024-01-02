#include <iostream>

int main()
{
  std::cout << "true is " << true << '\n';
  std::cout << "!true is " << !true << '\n';
  std::cout << "false is " << false << '\n';
  std::cout << "!false is " << !false << '\n';

  std::cout << "-----------------------\n";

  std::cout << std::boolalpha;

  std::cout << "true is " << true << '\n';
  std::cout << "!true is " << !true << '\n';
  std::cout << "false is " << false << '\n';
  std::cout << "!false is " << !false << '\n';

  bool b{};
  std::cout << "Enter a boolean value: ";
  std::cin >> std::boolalpha;
  std::cin >> b;
  std::cout << "b is " << b << '\n';

  return 0;
}
