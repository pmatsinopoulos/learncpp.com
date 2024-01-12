#include <string>
#include <iostream>

template <typename T>
struct RequiredField
{
  RequiredField(const T &value) : value(value) {}
  operator T &() { return value; }
  operator const T &() const { return value; }
  T value;
};

struct Options
{
  RequiredField<int> id;
  std::string label = "default label";
  friend std::ostream &operator<<(std::ostream &os, const Options &options);
};

std::ostream &operator<<(std::ostream &os, const Options &options)
{
  os << "Options " << options.id << " " << options.label;
  return os;
}

int main()
{
  Options options = {.id = 20};

  std::cout << "options " << options << '\n';

  return 0;
}
