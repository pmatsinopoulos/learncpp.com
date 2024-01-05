#include <format> // C++20
#include <iostream>
#include <bitset>

int main()
{
  const int x{12};
  std::cout << "x (decimal) = " << x << '\n';
  std::cout << std::hex << "x (hexadecimal) = " << x << '\n';
  std::cout << std::oct << "x (octal) = " << x << '\n';
  std::cout << std::dec;

  std::bitset<8> bin1{0b1100'0101};
  std::bitset<8> bin2{0xC5};

  std::cout << bin1 << '\n'
            << bin2 << '\n';

  std::cout << std::bitset<4>{0b1010} << '\n';

  std::cout << std::format("{:b}\n", 0b1010'1010);
  std::cout << std::format("{:#b}\n", 0b1011'1110);

  return 0;
}
