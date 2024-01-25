#include <iostream>
#include <utility>

enum class Fruit
{
  apple,
  banana,
  lemon,
  orange,
  watermelon
};

enum class Citrus
{
  lemon,
  lime,
  grapefruit,
  orange
};

int main()
{
  auto i = Fruit::banana;
  i = Fruit::orange;
  // i = Citrus::lemon; will not compile
  std::cout << "i = " << static_cast<int>(i) << '\n';

  auto j = Citrus::grapefruit;

  using enum Citrus;
  j = orange; // ok, because it is Citrus::orange

  // j = 42; // does not compile because implicit conversion is not supported

  Citrus k{1}; // OK, k == Citrus::lime
  std::cout << "k = " << static_cast<int>(k) << '\n';

  int x = static_cast<int>(j); // OK, but we are forcing int
  std::cout << "x = " << x << '\n';

  auto y = static_cast<std::underlying_type_t<decltype(j)>>(j); // OK
  std::cout << "y = " << y << '\n';

  auto z = std::to_underlying(j); // C++23
  std::cout << "z = " << z << '\n';

  return 0;
}
