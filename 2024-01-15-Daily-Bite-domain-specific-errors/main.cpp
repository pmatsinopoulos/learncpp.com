#include <system_error>
#include <string>
#include <iostream>
#include <utility>
#include <expected>
#include <cassert>

// Custom error enum.
// This is a scoped enum.
enum class TransactionError
{
  OK = 0,
  TemporaryError = 1,
  PermanentError = 2,
};

// Custom category that provides text description
struct TransactionErrorCategory : std::error_category
{
  const char *name() const noexcept override
  {
    return "transaction";
  }

  std::string message(int condition) const override
  {
    using namespace std::string_literals;
    switch (condition)
    {
    case 0:
      return "ok"s;
    case 1:
      return "temporary error, please retry"s;
    case 2:
      return "permanent error"s;
    }
    std::abort(); // unreachable
  }
};

// Register the enum as an error code enum
template <>
struct std::is_error_code_enum<TransactionError>
    : public std::true_type
{
};

// Mapping from error code enum to category
std::error_code make_error_code(TransactionError e)
{
  static auto category = TransactionErrorCategory{};
  return std::error_code(std::to_underlying(e), category);
}

// And now we can use it:
std::error_code my_function() noexcept
{
  return TransactionError::PermanentError;
}

// And obviously this also works with std::expected
std::expected<void, std::error_code> my_other_function() noexcept
{
  return std::unexpected{TransactionError::TemporaryError};
}

int main()
{
  if (auto err = my_function(); err)
  {
    std::cout << err.category().name() << " : " << err.message() << '\n';
  }

  if (auto res = my_other_function(); !res)
  {
    std::cout << res.error().category().name() << " : " << res.error().message() << '\n';
  }
  return 0;
}
