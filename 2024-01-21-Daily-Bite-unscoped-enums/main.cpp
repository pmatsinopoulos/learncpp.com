#include <iostream>
#include <numeric>

// Enumerators are assigned values starting from 0,
// unless overriden, the Enumerators are assigned consecutive values
enum Vegetables
{
  Potato,
  Tomato,
  Carrot = 42,
  Pea,
  Onion
};

enum Specific
{
  A = 1,
  B = A + 42,
  C = 1,
  D = A + B + C,
  E = std::lcm(13, 7)
};

enum : unsigned
{
  GlobalConstant = 42
};

enum IntLimits
{
  Min64Bit = INT64_MIN,
  Max64Bit = INT64_MAX
};

int main()
{
  std::cout << "Potato = " << Vegetables::Potato << '\n';

  std::cout << "Specific::E = " << Specific::E << '\n';

  int v = A; // Enumerators are implicitly convertible
             // to the backing type
  std::cout << "v = " << v << '\n';

  Specific w = static_cast<Specific>(1);
  // To convert from the underlying type we need a static cast
  // Note, multiple enumerators with the same value do not matter
  // because they are not distinguishable (i.e. A == C)
  std::cout << "w = " << w << '\n';

  std::cout << "Global Constant = " << GlobalConstant << '\n';

  std::cout << "IntLimits::Min64Bit = " << IntLimits::Min64Bit << '\n';
  std::cout << "IntLimits::Max64Bit = " << IntLimits::Max64Bit << '\n';

  return 0;
}
