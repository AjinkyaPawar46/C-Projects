#include<iostream>
using namespace std;

int count=0;
class Num{
    public:
    Num()
    {   
        count++;
        cout<<"This when an object is created having obj no. "<<count<<endl;
    }
    ~Num()
    {
        cout<<"This is when object dies with object no. "<<count<<endl;
        count--;
    }
};
int main()
{
    cout<<"We are inside main function"<<endl;
    cout<<"Creating the first object"<<endl;
    Num n1;
    {
        cout<<"Entering the block"<<endl;
        cout<<"Creating 2 more objects"<<endl;
        Num n2,n3;
        cout<<"Exiting the block"<<endl;
    }
    cout<<"Back to main function"<<endl;
    cout<<"End of program"<<endl;
    return 0;
}