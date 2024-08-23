#include <iostream>

int main()
{
    int *p = new int;
    *p = 7;
    std::cout << *p << "\n";
    delete p;
    p = nullptr;

    int *p_array = new int[5];
    for (int i = 0; i < 5; i++) {
        p_array[i] = i * i;
    }
    for (int i = 0; i < 5; i++) {
        std::cout << i << ". " << p_array[i] << "\n";
    }
    delete [] p_array;
    p_array = nullptr;

    std::cout << p_array << "\n";

    return 0;
}
