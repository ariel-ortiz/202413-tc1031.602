#include <iostream>

class Obj {
public:
    Obj(const std::string& name) : _name(name)
    {
        std::cout << "Creating " << _name << "\n";
    }
    ~Obj()
    {
        std::cout << "Destroying " << _name << "\n";
    }
private:
    std::string _name;
};

void fun()
{
    Obj d("D");
    Obj *p = new Obj("P");
    Obj e("E");
    delete p;
}

Obj global_z("Z");

int main()
{
    std::cout << "Start of main\n";
    Obj a("A");
    fun();
    Obj b("B");
    fun();
    Obj c("C");
    std::cout << "End of main\n";
    return 0;
}

Obj global_x("X");
Obj global_y("Y");
