#include <iostream>

void bad_swap(int x, int y)
{
    int t = x;
    x = y;
    y = t;
}

void swap(int& x, int& y)
{
    int t = x;
    x = y;
    y = t;
}

void ptr_swap(int* p, int* q)
{
    int t = *p;
    *p = *q;
    *q = t;
}

int main()
{
    int x = 5;
    std::cout << "x = " << x << "\n";
    int& r = x;
    std::cout << "r = " << r << "\n";
    r++;
    std::cout << "x = " << x << "\n";

    int a = 5;
    int b = 13;
    std::cout << "Bad Swap:\n";
    std::cout << "a = " << a << ", b = " << b << "\n";
    bad_swap(a, b);
    std::cout << "a = " << a << ", b = " << b << "\n";

    std::cout << "Good Swap:\n";
    std::cout << "a = " << a << ", b = " << b << "\n";
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << "\n";

    std::cout << "Pointer Swap:\n";
    std::cout << "a = " << a << ", b = " << b << "\n";
    ptr_swap(&a, &b);
    std::cout << "a = " << a << ", b = " << b << "\n";

    return 0;
}

