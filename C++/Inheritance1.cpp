#include<iostream>
using namespace std;

class Employee
{
    private:
    
    public:
        int id;
        char name;
        Employee(int i)
        {
            id=i;
        }
        Employee(){}
};

class Programmer : Employee 
{
    public:
        void assign()
        {
            cout<<"Enter the name - "; cin>>name;
        }
        void print()
        {
            cout<<id;
        }
        Programmer(){id=3;}
        Programmer(int i)

        {
            id=i;
        }

};

int main()
{
    Programmer Ajinkya;
    Ajinkya.assign();
    Ajinkya.print();
    return 0;
}