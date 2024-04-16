#include <iostream>

int main([[maybe_unused]] int argc, [[maybe_unused]] char const* argv[])
{
    int x { 5 };
    const int* ptr_to_const { &x };
    int const* const_ptr { &x };
    const int const* const_ptr_to_const { &x };

    return 0;
}
