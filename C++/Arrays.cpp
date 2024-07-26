#include<iostream>
using namespace std;
int main()
{
int marks []= {121, 45, 78, 21};
int Asmmarks[4];
Asmmarks[0] = 95;
Asmmarks[1] = 87;
Asmmarks[2] = 65;
Asmmarks[3] = 99;
Asmmarks[4] = 99;

// for(int i=0; i<4; i++)
// {
// cout<<"The value of ["<<i<<"] is "<<marks[i]<<endl;
// }
int q=0;
while(q<4)
{
cout<<"The value of ["<<q<<"] is "<<marks[q]<<endl;
q=q+1;
}
return 0;
}