#include <iostream>
using namespace std;

class Calculator;

class Complex
{
    int a, b;
    friend Calculator;
    friend Complex sumcomp(Complex o1, Complex o2);
    friend int add(Complex, Complex);
public:
    void setvalue(int x, int y)
    {
        a = x;
        b = y;
    }
    void print()
    {
        cout << "The complex no. is " << a << "+" << b << "i" << endl;
    }
};

class Calculator
{
public:
    int sumreal(Complex, Complex);
    int sumimg(Complex, Complex);
};

Complex sumcomp(Complex o1, Complex o2)
{
    Complex o3;
    o3.setvalue(o1.a + o2.a, o1.b + o2.b);
    return o3;
}
int Calculator::sumreal(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumimg(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int add(Complex c, Complex d)
{
    return (c.a+d.b);
}

int main()
{
    Calculator calc;
    Complex o1, o2, o3;
    o1.setvalue(2, 7);
    o1.print();
    o2.setvalue(3, 1);
    o2.print();
    o3 = sumcomp(o1, o2);
    o3.print();
    cout << "The sum of real part of the complex no.s is " << calc.sumreal(o1, o2) << endl;
    cout << "The sum of imaginary part of the complex no.s is " << calc.sumimg(o1, o2) << endl;
    return 0;
}
