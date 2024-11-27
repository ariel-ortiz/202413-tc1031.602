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

    TreeSet<int> b {7, 3, 5, 10, 2, 8};
    std::cout << "b.size() = " << b.size() << "\n";
    b.inorder(print_int);
    std::cout << "\n";
    b.inorder(add_ints);
    std::cout << total << "\n";
    b.levelorder(print_int);
    std::cout << "\n";
    std::cout << "b.height() = " << b.height() << "\n";
    std::cout << "b.is_full() = " << b.is_full() << "\n";
    std::cout << "b.leaf_count() = " << b.leaf_count() << "\n";
    std::cout << "b.is_perfect() = " << b.is_perfect() << "\n";
    return 0;
}
