#include <iostream>
#include <list>

struct Date {
    int year;
    std::string month;
    int day;
};

// Returns true if a come before b. Otherwise return false.
bool date_compare(const Date& a, const Date& b)
{
    return a.day < b.day;
}

int main()
{
    std::list<std::string> b {
        "January", "February", "March", "April", "May"
    };

    b.push_front("June");
    b.push_back("July");
    b.push_front("August");
    b.push_back("September");

    for (std::string elem : b) {
        std::cout << elem << " ";
    }
    std::cout << "\n";

    std::cout << "Size of b: " << b.size() << "\n";
    std::cout << "Front of b: " << b.front() << "\n";
    std::cout << "Back of b: " << b.back() << "\n";

    b.sort();

    for (std::string elem : b) {
        std::cout << elem << " ";
    }
    std::cout << "\n";

    std::list<Date> c {
        { 2024, "September", 18 },
        { 2000, "January", 1 },
        { 1789, "July", 14 },
        { 1810, "September", 16 }
    };

    for (Date elem : c) {
        std::cout << elem.year << "/" << elem.month << "/" << elem.day << "\n";
    }
    std::cout << "\n";

    c.sort(date_compare);

    for (Date elem : c) {
        std::cout << elem.year << "/" << elem.month << "/" << elem.day << "\n";
    }
    std::cout << "\n";

    return 0;
}
