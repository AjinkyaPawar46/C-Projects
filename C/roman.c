#include <stdio.h>

int main(void)
{
    printf("%7s%7s\n", "Decimal", "Roman");
    for (int num = 1; num <= 100; num++)
    {
        int t = num;
        printf("%7d \t\t", num);
        while (t > 0)
        {
            if (t == 100)
            {
                printf("C");
                t -= 100;
            }
            else if (t >= 90)
            {
                printf("XC");
                t -= 90;
            }
            else if (t >= 50)
            {
                printf("L");
                t -= 50;
            }
            else if (t >= 40)
            {
                printf("XL");
                t -= 40;
            }
            else if (t >= 10)
            {
                printf("X");
                t -= 10;
            }
            else if (t >= 9)
            {
                printf("IX");
                t -= 9;
            }
            else if (t >= 8)
            {
                printf("VIII");
                t -= 8;
            }
            else if (t >= 7)
            {
                printf("VII");
                t -= 97;
            }
            else if (t >= 6)
            {
                printf("VI");
                t -= 6;
            }
            else if (t >= 5)
            {
                printf("V");
                t -= 5;
            }
            else if (t >= 4)
            {
                printf("IV");
                t -= 4;
            }
            else if (t >= 3)
            {
                printf("III");
                t -= 3;
            }
            else if (t >= 2)
            {
                printf("II");
                t -= 2;
            }
            else if (t >= 1)
            {
                printf("I");
                t -= 1;
            }
        }

        puts("");
    }
}