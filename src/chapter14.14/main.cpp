#include <iostream>

class Fraction {
private:
    int m_numerator { 0 };
    int m_denominator { 1 };

public:
    // Default constructor
    Fraction(int numerator = 0, int denominator = 1)
        : m_numerator { numerator }
        , m_denominator { denominator }
    {
    }

    // Copy constructor
    Fraction(Fraction const& fraction)
        : m_numerator { fraction.m_numerator }
        , m_denominator { fraction.m_denominator }
    {
        std::cout << "Copy constructor called\n";
    }

    // Delete the copy constructor so no copies can be made
    // Fraction(const Fraction& fraction) = delete;

    // Explicitly request default copy constructor
    // Fraction(const Fraction& fraction) = default;

    void print() const
    {
        std::cout << "Fraction(" << m_numerator << ", " << m_denominator << ")\n";
    }
};

void printFraction(Fraction f) // f is pass by value
{
    f.print();
}

Fraction generateFraction(int n, int d)
{
    Fraction f { n, d };
    return f;
}

int main()
{
    Fraction f { 5, 3 };

    printFraction(f); // f is copied into the function parameter using copy constructor

    Fraction f2 { generateFraction(1, 2) }; // Fraction is returned using copy constructor

    printFraction(f2); // f is copied into the function parameter using copy constructor

    return 0;
}

/**
 * If you compile and execute the above example,
 * you may find that only two calls to the copy constructor occur.
 * This is a compiler optimization known as copy elision.
 * We discuss copy elision further in lesson 14.15 -- Class initialization and copy elision.
 */
