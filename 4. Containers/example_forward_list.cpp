#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<std::string> a {
        "Monday", "Tuesday", "Wednesday", "Thursday"
    };

    a.push_front("Friday");
    a.push_front("Saturday");
    a.push_front("Sunday");

    for (std::string elem : a) {
        std::cout << elem << " ";
    }
    std::cout << "\n";

    std::cout << "The front is: " << a.front() << "\n";

    a.pop_front();

    std::cout << "The front is: " << a.front() << "\n";

    a.reverse();

    for (std::string elem : a) {
        std::cout << elem << " ";
    }
    std::cout << "\n";

    a.sort();

    for (std::string elem : a) {
        std::cout << elem << " ";
    }
    std::cout << "\n";

    return 0;
}
