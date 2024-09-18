#include <iostream>
#include <vector>

int main()
{
    std::vector<int> x;
    x.reserve(5);
    std::cout << "size = " << x.size() << ", capacity = " << x.capacity() << "\n";
    x.push_back(4);
    std::cout << "size = " << x.size() << ", capacity = " << x.capacity() << "\n";
    x.push_back(5);
    std::cout << "size = " << x.size() << ", capacity = " << x.capacity() << "\n";
    x.push_back(15);
    std::cout << "size = " << x.size() << ", capacity = " << x.capacity() << "\n";
    x.push_back(16);
    std::cout << "size = " << x.size() << ", capacity = " << x.capacity() << "\n";
    x.push_back(23);
    std::cout << "size = " << x.size() << ", capacity = " << x.capacity() << "\n";
    x.push_back(42);
    std::cout << "size = " << x.size() << ", capacity = " << x.capacity() << "\n";
    x.insert(x.begin(), 108);
    std::cout << "size = " << x.size() << ", capacity = " << x.capacity() << "\n";
    for (int elem : x) {
        std::cout << elem << " ";
    }
    std::cout << "\n";
    for (int i = 0; i < x.size(); i++) {
        std::cout << i << ".- " << x[i] << "\n";
    }

    return 0;
}
