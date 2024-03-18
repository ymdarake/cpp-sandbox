#include <iostream>

int getValue()
{
    // clang-format off
std::cerr << "getValue() called\n";
    // clang-format on
    return 4;
}

int main(int argc, char const* argv[])
{
    // clang-format off
std::cerr << "main() called\n";
    // clang-format on
    std::cout << getValue() << '\n';
    return 0;
}
