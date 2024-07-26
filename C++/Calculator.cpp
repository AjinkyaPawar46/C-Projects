#include <iostream>
#include <cmath>
using namespace std;

class Calculator
{
protected:
    float num1, num2;
    char op;

public:
    void assign()
    {
        cout << "Enter the 2 numbers" << endl;
        cin >> num1 >> num2;
        cout << "Enter any operation (+,-,*,/)" << endl;
        cin >> op;
    }
    void calculate()
    {
        switch (op)
        {
        case '+':
            cout << "The answer is " << num1 << " " << op << " " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << "The answer is " << num1 << " " << op << " " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << "The answer is " << num1 << " " << op << " " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            cout << "The answer is " << num1 << " " << op << " " << num2 << " = " << num1 / num2 << endl;
            break;
        default:
            cout << "Incorrect operation " << endl;
            break;
        }
    }
};
class SciCalculator
{
protected:
    float num3;
    char op;

public:
    void s_assign()
    {
        cout << "Enter a number" << endl;
        cin >> num3;
        cout << "Enter operation [sqrt = a,sin = b,cos = c ,tan = d]" << endl;
        cin >> op;
    }
    void s_calculate()
    {
        float t;
        switch (op)
        {
        case 'a':
            cout << "The square root of " << num3 << " is " << sqrt(num3) << endl;
            break;
        case 'b':
            t = num3;
            num3 = (num3 / 180) * 3.14;
            cout << "The sine of " << t << " degrees is " << sin(num3) << endl;
            break;
        case 'c':
            t = num3;
            num3 = (num3 / 180) * 3.14;
            cout << "The cosine of " << t << " degrees is " << cos(num3) << endl;
            break;
        case 'd':
            t = num3;
            num3 = (num3 / 180) * 3.14;
            cout << "The tangent of " << t << " degrees is " << tan(num3) << endl;
            break;
        default:
            cout << "Incorrect Operation" << endl;
            break;
        }
    }
};
class Hybridcal : public Calculator, public SciCalculator
{
    int a;

public:
    void select()
    {
        cout << "Which calculator would you like to use (normal = 1, scientific = 2 )" << endl;
        cin >> a;
        if (a == 1)
        {
            assign();
            calculate();
        }
        else if (a == 2)
        {
            s_assign();
            s_calculate();
        }
        else
            cout << "Incorrect input value" << endl;
    }
};
int main()
{
    int b;
    Hybridcal H1;
    H1.select();
    cout << "Would you like to reuse the calculator? (yes = 1, no= 0)" << endl;
    cin >> b;
    if (b == 1)
    {
        H1.select();
        cout << "Would you like to reuse the calculator? (yes = 1, no= 0)" << endl;
        cin >> b;
    }
    return 0;
}
