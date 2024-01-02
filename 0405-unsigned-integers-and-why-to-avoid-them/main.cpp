#include <iostream>

int main()
{
  unsigned short int x{65'535};

  std::cout << "x = " << x << '\n';

  x += 200;

  std::cout << "x = " << x << '\n';

  short y{-32'768};

  std::cout << y << '\n';

  y -= 1;

  std::cout << y << '\n';

  return 0;
}
