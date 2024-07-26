#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal = 1000;
    double rate = 0.05;

    printf("%4s%21s\n", "Year", "Amount on deposit");
    for (int time = 1; time <= 10; time++)
    {
        double amount = principal * pow(1 + rate, time);

        printf("%4i%21.2f\n", time, amount);
    }
}