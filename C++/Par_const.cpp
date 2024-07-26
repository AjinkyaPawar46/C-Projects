#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y) // Paramterized Constructor Declared..It is used to initialize any new created object
    {
    a = x;
    b = y;
    }
    Complex(int x)
    {
        a=x;  b=0;
    }
    
    void print()
    {
        cout << "The complex no. is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    // Implicit call
    Complex a(5, 6);
    a.print();

    // Explicit call
    Complex b = Complex(45, 31);
    b.print();
    Complex c(3);
    c.print();
    return 0;
}