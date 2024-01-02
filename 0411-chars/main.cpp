#include <iostream>

int main()
{
  char a{'a'};

  std::cout << "c is = " << a << '\n';

  char b{98};

  std::cout << "b is = " << b << '\n';

  std::cout << "Are you sure ? (y/n): ";

  char answer{};
  std::cin >> answer;

  std::cout << "answer is " << answer << '\n';

  char answer2{};
  std::cin >> answer2;
  std::cout << "answer2 is " << answer2 << '\n';

  return 0;
}
