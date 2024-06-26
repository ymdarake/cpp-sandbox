#include <iostream>

int main([[maybe_unused]] int argc, [[maybe_unused]] char const* argv[])
{
    int x { 5 };
    int* ptr { &x };

    std::cout << *ptr << '\n'; // valid

    {
        int y { 6 };
        ptr = &y;

        std::cout << *ptr << '\n'; // valid
    }                              // y goes out of scope, and ptr is now dangling

    std::cout << *ptr << '\n'; // undefined behavior from dereferencing a dangling pointer

    return 0;
}
