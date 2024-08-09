#include <iostream>
#include "fact.h"

int main()
{
    int x = 5;
    int r = factorial(x);
    std::cout << "The factorial of " << x << " is " << r << "\n";
    std::cout << "End of program\n";
    return 0;
}
