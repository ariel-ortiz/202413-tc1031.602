#include <algorithm>
#include <iostream>
#include <vector>

template<typename T>
int linear_search(const std::vector<T>& data, T value)
{
    for (int i = 0; i < data.size(); i++) {
        if (value == data.at(i)) {
            return i;
        }
    }
    return -1;
}

template<typename T>
int binary_search(const std::vector<T>& data, T value)
{
    int min = 0;
    int max = data.size() - 1;

    while (min <= max) {
        // int mid = (min + max) / 2;
        int mid = (max - min) / 2 + min;
        if (value == data.at(mid)) {
            return mid;
        } else if (value < data.at(mid)) {
            max = mid - 1;
        } else {
            min = mid + 1;
        }
    }
    return -1;
}

int main()
{
    std::vector<std::string> dwarfs {
        "Thorin", "Balin", "Fili",
        "Bombur", "Kili", "Gloin",
        "Oin", "Dwalin", "Ori",
        "Dori", "Bofur", "Bifur",
        "Nori"
    };

    std::cout << "Index of Dwalin: "
        << linear_search(dwarfs, std::string("Dwalin")) << "\n";
    std::cout << "Index of Gimli: "
        << linear_search(dwarfs, std::string("Gimli")) << "\n";

    std::sort(dwarfs.begin(), dwarfs.end());

    for (std::string s : dwarfs) {
        std::cout << s << "\n";
    }

    std::cout << "Index of Dwalin: "
        << binary_search(dwarfs, std::string("Dwalin")) << "\n";
    std::cout << "Index of Gimli: "
        << binary_search(dwarfs, std::string("Gimli")) << "\n";

    return 0;
}
