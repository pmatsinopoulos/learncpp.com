#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>
#include <iostream>

int getUserInput()
{
  PLOGD << "getUserInput() called";

  std::cout << "Enter a number: ";

  int x { };
  std::cin >> x;

  return x;
}

int main()
{
  plog::init(plog::debug, "hello.log");

  PLOGD << "main() called...";

  int x { getUserInput() };

  std::cout << "You entered: " << x << '\n';

  return 0;
}
