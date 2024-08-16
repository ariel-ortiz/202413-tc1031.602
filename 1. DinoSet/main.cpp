#include <iostream>
#include "dinoset.h"

int main()
{
    DinoId x, y;
    x = DinoId::velociraptor;
    y = DinoId::triceratops;
    x = static_cast<DinoId>(1);
    int i = static_cast<int>(y);

    DinoSet a;
    a.add(DinoId::velociraptor);
    a.add(DinoId::tyrannosaurus);

    DinoSet b;
    b.add(DinoId::tyrannosaurus);
    b.add(DinoId::triceratops);
    b.add(DinoId::pteranodon);
    b.add(DinoId::tyrannosaurus);

    std::cout << "a = " << a.to_string() << "\n";
    std::cout << "b = " << b.to_string() << "\n";
    std::cout << "a.contains(DinoId::tyrannosaurus) = " << a.contains(DinoId::tyrannosaurus) << "\n";
    std::cout << "a.contains(DinoId::procompsognathus) = " << a.contains(DinoId::procompsognathus) << "\n";

    DinoSet c;
    c = a + b;
    std::cout << "c = " << c.to_string() << "\n";

    return 0;
}
