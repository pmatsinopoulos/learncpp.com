#include <vector>
#include <functional>
#include <algorithm>
#include <random>
#include <iostream>

#ifdef PARALLEL
#include <execution>
namespace execution = std::execution;
#else
enum class execution
{
  seq,
  unseq,
  par_unseq,
  par
};
#endif

int main()
{
  std::vector<int> data{1, 2, 3, 4, 5, 6, 7};

  for (size_t i = 0; i < data.size(); i++)
  {
    std::cout << "i = " << i << ", value = " << data[i] << '\n';
  }

  // Basic reduce with int{} (0) as starting value
  // and std::plus<int>{} as the reduction operation
  int sum = std::reduce(data.begin(), data.end());

  std::cout << "sum = " << sum << '\n';
  //-----------------------------------

  // Reduce with custom init value and reduction operation
  int product = std::reduce(data.begin(), data.end(), 1, std::multiplies<>{});

  std::cout << "product = " << product << '\n';
  //------------------------------------------------------

  std::mt19937 gen(0);
  std::vector<unsigned> large_data;
  std::generate_n(std::back_inserter(large_data), 1'000'000, std::ref(gen));

  // Automatically parallelized sum
#ifdef PARALLEL
  int64_t big_sum = std::reduce(std::execution::par, large_data.cbegin(), large_data.cend(), 0z);
#else
  int64_t big_sum = std::reduce(large_data.cbegin(), large_data.cend(), 0);
#endif
  std::cout << "big_sum = " << big_sum << '\n';

  return 0;
}
