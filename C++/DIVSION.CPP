#include <iostream>
int main()
{

int a,b,q,r;
std::cout<<"Enter values for dividend and divisor respectively:-";
std::cin>>a>>b;
std::cout<<"Your operation is "<<a<<" divided by "<<b;
for (q=1; r>=b; q++)
{
r=a-b;
}
std::cout<<"Quotient is "<<q<<"\t Remainder is "<<r;
return 0;
}