#include <iostream>
#include "intlist.h"
#include "recursion.h"

int main()
{
    IntList a;
    IntList b {4, 8, 15, 16, 23, 42};

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "first(b) = " << first(b) << "\n";
    std::cout << "rest(b) = " << rest(b) << "\n";
    std::cout << "cons(108, b) = " << cons(108, b) << "\n";
    std::cout << "is_empty(a) = " << is_empty(a) << "\n";
    std::cout << "is_empty(b) = " << is_empty(b) << "\n";
    std::cout << "size(a) = " << size(a) << "\n";
    std::cout << "size(b) = " << size(b) << "\n";
    std::cout << "cons_end(108, a) = " << cons_end(108, a) << "\n";
    std::cout << "cons_end(108, b) = " << cons_end(108, b) << "\n";
    std::cout << "sum(a) = " << sum(a) << "\n";
    std::cout << "sum(b) = " << sum(b) << "\n";
    std::cout << "duplicate(a) = " << duplicate(a) << "\n";
    std::cout << "duplicate(b) = " << duplicate(b) << "\n";
    std::cout << "last(b) = " << last(b) << "\n";

    return 0;
}
