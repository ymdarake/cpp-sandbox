struct Foo {
    int a {};
    int b {};
    int c {};
};

struct Employee {
    int id {};
    int age {};
    double wage {};
};

int main()
{
    // When doing designated initializers of single values using braces,
    // Clang improperly issues warning “braces around scalar initializer”.
    // Hopefully this will be fixed soon.
    Foo f1 { .a { 1 }, .c { 3 } }; // ok: f1.a = 1, f1.b = 0 (value initialized), f1.c = 3
    Foo f2 { .a = 1, .c = 3 };     // ok: f2.a = 1, f2.b = 0 (value initialized), f2.c = 3
    Foo f3 { .b { 2 }, .a { 1 } }; // error: initialization order does not match order of declaration in struct

    Employee joe { 1, 32, 60000.0 };
    joe = { joe.id, 33, 66000.0 }; // Joe had a birthday and got a raise
    // Assignment with designated initializers
    joe = { .id = joe.id, .age = 33, .wage = 66000.0 }; // Joe had a birthday and got a raise

    return 0;
}
