#include <iostream>

int foo(int a);

int foo();

int main()
{
  foo();
  return 0;
}

int foo() {
  std::cout << "foo" << '\n';
  return 1;
}
