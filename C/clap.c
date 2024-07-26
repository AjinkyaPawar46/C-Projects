#include <stdio.h>

int main(void)
{
    int n, i = 1, num, digit;
    puts("Enter N : ");
    scanf("%d", &n);
    while (i <= n)
    {
        num = i;
        while (num > 0)
        {
            digit = num % 10;
            if (digit == 7)
            {
                puts("CLAP");
                break;
            }
            num = num / 10;
        }

        if (i % 7 == 0 && digit != 7)
        {
            puts("CLAP");
        }
        else if (i % 7 != 0 && digit != 7)
        {
            printf("%d \n", i);
        }
        i++;
    }
}