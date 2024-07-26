#include <iostream>

using namespace std;

int main()
{
    int h, w;
    cout << "Enter the height and width of the rectangle : " << endl;
    cin >> h >> w;

    for (int i = 1; i <= w; i++)
    {
        cout << "*";
    }
    cout << endl;
    for (int j = 1; j <= (h - 2); j++)
    {
        cout << "*";
        for (int k = 1; k <= (w - 2); k++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }
    for (int i = 1; i <= w; i++)
    {
        cout << "*";
    }
    cout << endl;

    return 0;
}