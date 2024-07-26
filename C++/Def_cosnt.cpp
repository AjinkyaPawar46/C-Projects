#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void); // Default Constructor Declared..It is used to initialize any new created object
    void print()
    {
        cout << "The complex no. is " << a << "+" << b << "i" << endl;
    }
};
Complex ::Complex(void)
{
    a = 46;
    b = 30;
}

int main()
{
    Complex c1, c2, c3;
    c1.print();
    c2.print();
    c3.print();

    return 0;
}