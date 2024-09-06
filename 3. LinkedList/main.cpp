#include <iostream>
#include "linkedlist.h"

int main()
{
    LinkedList<int> a;
    LinkedList<std::string> b {"One", "Two", "Three", "Four"};
    LinkedList<double> c;

    std::cout << a.to_string() << "\n";

    a.insert_back(4);
    a.insert_back(6);
    a.insert_back(10);
    std::cout << "a.size() = " << a.size() << "\n";
    std::cout << a.to_string() << "\n";

    std::cout << b.remove_front() << "\n";
    std::cout << "b.size() = " << b.size() << "\n";
    std::cout << b.to_string() << "\n";

    c.insert_front(3.1416);
    c.insert_front(2.718);
    c.insert_front(1.4142);
    std::cout << "c.size() = " << c.size() << "\n";
    std::cout << c.to_string() << "\n";

    // LinkedList<double> d = c;  // Call copy constructor

    LinkedList<double> d;
    // d = c; // Call asignment operator

    return 0;
}
