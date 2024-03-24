#include <cstdint> // for fast and least types
#include <iostream>

int main()
{
    std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
    std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
    std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
    std::cout << '\n';
    std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
    std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
    std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";

    return 0;
}
/**
 * M1 mac
 *
 * least 8:  8 bits
 * least 16: 16 bits
 * least 32: 32 bits
 *
 * fast 8:  8 bits
 * fast 16: 16 bits
 * fast 32: 32 bits
 *
 */
