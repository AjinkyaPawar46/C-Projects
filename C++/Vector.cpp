#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v1(6,7);
    
    v1.push_back(99);
   
    
    vector<int> :: iterator i = v1.begin();
    v1.insert(i,2,88);
    for (int i=0; i<v1.size() ;i++)
    {
        cout<<v1.at(i)<<" ";
    }

    return 0;
}