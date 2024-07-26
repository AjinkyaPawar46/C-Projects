#include<iostream>
#include<math.h>
using namespace std;

int main()
{
float a,b,c,r1,r2,s,d;
cout<<"Enter the coefficients of the equation(a,b,c)"<<endl;
cin>>a>>b>>c;

d=b*b-4*a*c; //This calculates the discriminant
if(d>=0)
{
s= sqrt(d);
//The next 2 statements uses the quadratic equation formula
r1= (-b+s)/2*a;
r2=(-b-s)/2*a;

if(r1==r2)
 cout<<"The only root of the equation is "<<r1;
else
 cout<<"Roots of the equation are:"<<r1<<" and "<<r2;
}
else
cout<<"This equation has imaginary roots";
return 0;
}