#include <iostream>
using namespace std;

class Numbers
{
    int a;

public:
    Numbers()
    {
        a = 0;
    }
    Numbers(int num)
    {
        a = num;
    }
    Numbers(Numbers &obj) // When copy constructor is not defined, compiler uses its default copy constructor
    {
        cout << "Copy constructor invoked !!!" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number is " << a << endl;
    }
};

int main()
{
    Numbers x, y(23), z(45), z2;
    x.display();
    y.display();
    z.display();
    Numbers z1(x); // Copy const invoked
    z1.display();
    z2 = z; // Copy const not invoked as z2 is already defined
    z2.display();
    Numbers z3 = z; // Copy consructor invoked
    z3.display();
    return 0;
}