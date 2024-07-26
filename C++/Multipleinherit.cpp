#include<iostream>
using namespace std;

class Base1
{
    protected:
        int base1num;
    public:
        void setnum1(int a)
        {
            base1num=a;
        }
};
class Base2
{
    protected:
        int base2num;
    public:
        void setnum2(int a)
        {
            base2num=a;
        }
};
class Deriv: public Base1, public Base2
{
    public:
        void show()
        {
            cout<<"The value of num1 is "<<base1num<<endl;
            cout<<"The value of num2 is "<<base2num<<endl;
            cout<<"The sum of these values is "<<base1num+base2num<<endl;
        }
};
int main()
{
    Deriv Ajinkya;
    Ajinkya.setnum1(20);
    Ajinkya.setnum2(30);
    Ajinkya.show();


    return 0;
}