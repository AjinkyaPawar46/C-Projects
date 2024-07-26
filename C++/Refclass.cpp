#include<iostream>
using namespace std;
class Y;
class X{
        int data1;
    public:
    void assign(int val1)
    {
        data1=val1;
    }
    void print()
    {
        cout<<"The value of data in a1 is is "<<data1<<endl;
    }
   friend void exchange(X&,Y&); 
};
class Y{
        int data2;
    public:
    void assign(int val2)
    {
        data2=val2;
    }
    void print()
    {
        cout<<"The value of data in b1 is is "<<data2<<endl;
    }
    friend void exchange(X&,Y&); 
};
void exchange(X& a, Y& b)
{
    int temp=a.data1;
    a.data1=b.data2;
    b.data2=temp;
}
int main()
{   
    X a1; Y b1;
    a1.assign(46);
    b1.assign(30);
    exchange(a1, b1);
    a1.print();
    b1.print();

    return 0;
}
