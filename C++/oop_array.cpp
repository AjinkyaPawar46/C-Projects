#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "The item id is " << id << endl;
        cout << "The price of the item is " << price << endl;
    }
};

int main()
{
    int size = 3;
    Shop *ptr = new Shop[size];
    Shop *ptrtemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the item id and its price for item no." << i + 1 << endl;
        cin >> p >> q;
        (*ptr).setdata(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item number :" << i + 1 << endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    return 0;
}