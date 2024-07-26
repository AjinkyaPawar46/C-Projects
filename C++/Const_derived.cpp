#include<iostream>
using namespace std;

class Base1
{
     int data1;
    public:
        Base1(int i)
        {
            data1=i;
            cout<<"Base 1 constructor called"<<endl;
        }
        void print1()
        {
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2
{
     int data2;
    public:
        Base2(int i)
        {
            data2=i;
            cout<<"Base 2 constructor called"<<endl;
        }
        void print2()
        {
            cout<<"The value of data2 is "<<data2<<endl;
        }
};

class Derived : public Base1, public Base2
{
    int dedata1, dedata2;
    public:
    Derived(int a, int b,int c,int d) : Base1(a), Base2(b)
    {
        dedata1=c;
        dedata2=d;
        cout<<"Derived constructor called"<<endl;
    }
    void print3()
    {
        cout<<"The value of dedata1 is "<<dedata1<<endl;
        cout<<"The value of dedata2 is "<<dedata2<<endl;
    }
};



int main()
{
    Derived Aji(1,2,3,4);
    Aji.print1();
    Aji.print2();
    Aji.print3();

    return 0;
}