#include<iostream>
using namespace std;

int main()
{
    int* p= new int[3];
    p[0]=1;
    p[1]=10;
    p[2]=100;
    p++;
    cout<<*p;
    return 0;
}