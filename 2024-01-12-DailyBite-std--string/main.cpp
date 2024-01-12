#include <string>
#include <iostream>

int main()
{
  std::string str = "Hello World?";

  std::cout << str << '\n';

  // Same interface as std::vector
  str.pop_back();
  std::cout << "after pop_back(): " << str << '\n';

  str.push_back('!');
  std::cout << "after push_back(): " << str << '\n';

  // Importantly, these operations maintain null-termination
  char c = str[str.size()];
  std::cout << "*" << c << "*" << '\n';

  // Convenience methods
  size_t pos = str.find_first_of(" ?");
  std::cout << "pos = " << pos << '\n';

  // Get a C-style string
  const char *cstring = str.c_str();
  std::cout << "cstring = " << cstring << '\n';

  // Substring, offset and count
  auto world = str.substr(6, 5);
  std::cout << "world = " << world << '\n';

  // Count can be omitted to take the remainder of the string
  auto remainder = str.substr(6);
  std::cout << "remainder = " << remainder << '\n';

  return 0;
}
