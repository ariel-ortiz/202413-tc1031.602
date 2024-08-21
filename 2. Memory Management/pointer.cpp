#include <iostream>

int main()
{
    int x = 5;
    int *p = &x;
    std::cout << "x         = " << x << "\n";
    std::cout << "sizeof(x) = " << sizeof(x) << "\n";
    std::cout << "&x        = " << &x << "\n";
    std::cout << "p         = " << p << "\n";
    std::cout << "sizeof(p) = " << sizeof(p) << "\n";
    std::cout << "&p        = " << &p << "\n";
    std::cout << "*p        = " << *p << "\n";
    x++;
    (*p)++;
    std::cout << "x         = " << x << "\n";
    p++;
    std::cout << "p         = " << p << "\n";
    std::cout << "*p        = " << *p << "\n";
    *p = 0;
    std::cout << "p         = " << p << "\n";
    // std::cout << "*p        = " << *p << "\n";
    return 0;
}
