#include <iostream>

int add (int a, int b)
{
  return a + b;
}

int multiply(int a, int b)
{
  return a * b;
}

void doSomething(int /* count */)
{
  // does nothing with +count+
}

int main()
{
  int a { 3 };
  int b { 8 };
  std::cout << add(a, b) << '\n';
  std::cout << add(1 + 2, 3 * 4) << '\n';

  std::cout << add(a, a) << '\n';
  std::cout << add(1, multiply(2, 3)) << '\n';
  std::cout << add(1, add(2, 3)) << '\n';

  doSomething(4);

  return 0;
}
