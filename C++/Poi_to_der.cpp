#include <iostream>

using namespace std;

class Base
{
public:
    int var1;
    void display()
    {
        cout << "Var1 =" << var1 << endl;
    }
};

class Derived : public Base
{
public:
    int var2;
    void display()
    {
        cout << "Var2 =" << var2 << endl;
    }
};

int main()
{
    Base obj_base;
    Derived obj_der;
    Base *base_pointer;

    base_pointer = &obj_der;
    base_pointer->var1 = 97;
    // base_pointer->var2 =32;// [This will not work as pointer can access base class attributes of derived obj]
    base_pointer->display();

    Derived *der_pointer;
    der_pointer= &obj_der;
    der_pointer->var1 = 100;
    der_pointer->var2 = 75;
    der_pointer->display();

    base_pointer->display();

    return 0;
}