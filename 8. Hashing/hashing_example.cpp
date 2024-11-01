#include <functional>
#include <iostream>

int main()
{
    std::hash<int> hash_int;
    std::hash<double> hash_double;
    std::hash<std::string> hash_string;

    std::cout << hash_int(42) << "\n";
    std::cout << hash_double(3.1416) << "\n";
    std::cout << hash_string("hello") << "\n";
    std::cout << hash_string("Hello") << "\n";
    std::cout << hash_string("") << "\n";
}
