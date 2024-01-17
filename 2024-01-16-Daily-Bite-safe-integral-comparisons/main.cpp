#include <utility>
#include <iostream>

int main()
{
  int a = -10;
  unsigned b = 10;
  bool b1 = a < b;
  // a becomes unsigned -10 + UINT_MAX

  std::cout << std::boolalpha;

  // it will print "false", which is wrong
  std::cout << "b1 = " << b1 << '\n';

  bool b2 = std::cmp_less(a, b);
  // it will print "true"
  std::cout << "b2 = " << b2 << '\n';

  int c = -2'000'000'000;
  unsigned d = 2'294'967'296;
  bool b3 = c == d; // compare c to d, signed to unsigned
  // it will print "true", which is wrong/error
  std::cout << "b3 = " << b3 << '\n';

  bool b4 = std::cmp_equal(c, d);
  // it will print "false", which is correct.
  std::cout << "b4 = " << b4 << '\n';

  return 0;
}
