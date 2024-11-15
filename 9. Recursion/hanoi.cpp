#include <iostream>

int step = 0;

void hanoi(int n, char origin, char temp, char destiny)
{
    if (n == 1) {
        step++;
        std::cout << step << ".- Move disc 1 from " << origin << " to " << destiny << "\n";
        return;
    }

    hanoi(n - 1, origin, destiny, temp);
    step++;
    std::cout << step << ".- Move disc " << n << " from " << origin << " to " << destiny << "\n";
    hanoi(n - 1, temp, origin, destiny);
}

int main()
{
    hanoi(8, 'A', 'B', 'C');
    return 0;
}
