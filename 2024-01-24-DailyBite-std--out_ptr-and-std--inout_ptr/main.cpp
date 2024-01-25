#include <iostream>
#include <memory>
#include <stdexcept>

// C API
struct Handle
{
};
int create_handle(Handle **handle);
int recreate_handle(Handle **handle);
void free_handle(Handle *handle);
int create_handle_ex(int option_a, int option_b, void **handle);

int main()
{
  {
    std::unique_ptr<Handle, decltype([](Handle *h)
                                     { free_handle(h); })>
        handle;

    // std::out_ptr for functions that first destroy
    // and then create a new handle
    if (int err = create_handle(std::out_ptr(handle)); err != 0) // requires g++-13 version 14 and above.
      throw std::runtime_error("couldn't create handle");

    // std::inout_ptr for functions that first destroy
    // and then create a new handle
    if (int err = recreate_handle(std::inout_ptr(handle)); err != 0)
      throw std::runtime_error("couldn't recreate handle");
  } // handle will be freed

  { // Also supports std::shared_ptr
    std::shared_ptr<Handle> handle;

    if (int err = create_handle(std::out_ptr(handle, free_handle)); err != 0)
      throw std::runtime_error("couldn't create handle");
  } // handle freed

  return 0;
}
