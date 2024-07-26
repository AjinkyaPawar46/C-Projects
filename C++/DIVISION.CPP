#include<iostream>
using namespace std;

int main()
{
    
long int dividend,divisor,q,r;
cout<<"Enter value for dividend and divisor."<<endl;
cin>>dividend>>divisor;
cout<<"--> Your operation is "<<dividend<<" divided by "<<divisor<<endl;
r=dividend;
for (q=0; r>=divisor;q++)
{
r=r-divisor;
}
cout<<">Quotient is "<<q<<"\t >Remainder is "<<r;
return 0;
}