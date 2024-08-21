#include <iostream>

int x_global = 42;
int y_global;

void fun()
{

}

int main()
{
    int x_local = 5;
    int y_local;
    int *p_local = new int(7);

    std::cout << "x_global  = " << x_global << "\n";
    std::cout << "&x_global = " << &x_global << "\n";
    std::cout << "y_global  = " << y_global << "\n";
    std::cout << "&y_global = " << &y_global << "\n";

    std::cout << "x_local   = " << x_local << "\n";
    std::cout << "&x_local  = " << &x_local << "\n";
    std::cout << "y_local   = " << y_local << "\n";
    std::cout << "&y_local  = " << &y_local << "\n";

    std::cout << "&fun      = " << reinterpret_cast<void*>(&fun) << "\n";
    std::cout << "&main     = " << reinterpret_cast<void*>(&main) << "\n";

    std::cout << "p_local   = " << p_local << "\n";
    std::cout << "&p_local  = " << &p_local << "\n";
    std::cout << "*p_local  = " << *p_local << "\n";

    delete p_local;

    return 0;
}
