#include <iostream>

int main()
{
  int x{2'147'483'647};

  std::cout << x << '\n';

  x += 1;

  std::cout << x << '\n';

  std::cout << "20 / 4 = " << 20 / 4 << '\n';

  std::cout << "8 / 5 = " << 8 / 5 << '\n';

  return 0;
}
