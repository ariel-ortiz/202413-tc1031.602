#include <iostream>
#include <vector>
#include "treeset.h"

void print_int(int x)
{
    std::cout << x << " ";
}

int total = 0;
void add_ints(int x)
{
    total += x;
}

int main()
{
    TreeSet<int> a;
    a.add(7);
    a.add(3);
    a.add(5);
    a.add(7);
    std::cout << "a.size() = " << a.size() << "\n";

    TreeSet<int> b {7, 3, 5, 10, 2, 8, 12};
    std::cout << "b.size() = " << b.size() << "\n";
    b.inorder(print_int);
    std::cout << "\n";
    b.inorder(add_ints);
    std::cout << total << "\n";
    return 0;
}
