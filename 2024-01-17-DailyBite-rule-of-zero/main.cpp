#include <iostream>
#include <string>
#include <vector>

// Piecewise Copy/Move constructors, Copy/Move assignments
// and destructor will be provided by the compiler.
struct MyClass
{
  MyClass(const std::string &label,
          const std::vector<int> &data) : label_(label), data_(data) {}

private:
  std::string label_;
  std::vector<int> data_;
};

struct MoveOnly
{
  MoveOnly(MoveOnly &&) = default;
};

// If one of the members is move-only, the copy constructor
// and copy assignment will not be generated.
struct NoCopyGenerated
{
  MoveOnly move_only_;
};

int main()
{
  static_assert(not std::is_copy_constructible_v<NoCopyGenerated>);

  return 0;
}
