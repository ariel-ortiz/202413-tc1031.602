#include <iostream>
#include "linkedlist.h"

int main()
{
    LinkedList<int> a;
    LinkedList<std::string> b;
    LinkedList<double> c;

    std::cout << a.to_string() << "\n";

    a.insert_front(4);
    a.insert_front(6);
    a.insert_front(10);
    std::cout << "a.size() = " << a.size() << "\n";
    std::cout << a.to_string() << "\n";

    b.insert_front("One");
    b.insert_front("Two");
    b.insert_front("Three");
    b.insert_front("Four");
    std::cout << "b.size() = " << b.size() << "\n";
    std::cout << b.to_string() << "\n";

    c.insert_front(3.1416);
    c.insert_front(2.718);
    c.insert_front(1.4142);
    std::cout << "c.size() = " << c.size() << "\n";
    std::cout << c.to_string() << "\n";

    return 0;
}
