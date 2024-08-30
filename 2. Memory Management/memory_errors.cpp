#include <iostream>

int* fun() {
    static int x = 7;
    x++;
    return &x;
}

int main()
{
    int* p = new int;

    *p = 5;

    delete p;
    p = nullptr;

    // delete p;

    int i = 0;
    p = &i;

    *p = 5;

    p = fun();
    std::cout << *p << "\n";
    p = fun();
    std::cout << *p << "\n";

    // delete p;

    p = new int[5];

    delete [] p;

    p = new int;

    delete p;

    int n = 5;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }
    delete [] a;

    return 0;
}