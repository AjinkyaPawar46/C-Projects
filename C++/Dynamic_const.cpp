#include <iostream>
using namespace std;

class BankDep
{
    int principal;
    float rate;
    int years;
    float returnamt;

public:
    BankDep() {}
    BankDep(int p, int y, float r)
    {
        principal = p;
        years = y;
        rate = r;
        returnamt = principal;
        for (int i = 0; i < years; i++)
        {
            returnamt = returnamt * (1 + rate);
        }
    }
    BankDep(int p, int y, int r)
    {
        principal = p;
        years = y;
        rate = float(r) / 100;
        returnamt = principal;
        for (int i = 0; i < years; i++)
        {
            returnamt = returnamt * (1 + rate);
        }
    }
    void show()
    {
        cout << "The principal value given is " << principal << endl
             << "The return amount for same is " << returnamt << endl;
    }
};

int main()
{
    BankDep b1, b2, b3;
    int p, y, R;
    float r;
    cout << "Enter the principal amount,no. of years and rate in fraction" << endl;
    cin >> p >> y >> r;
    b1 = BankDep(p, y, r);
    b1.show();

    cout << "Enter the principal amount,no. of years and rate in percent" << endl;
    cin >> p >> y >> R;
    b2 = BankDep(p, y, R);
    b2.show();
    b3.show();
    return 0;
}