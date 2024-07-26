#include <stdio.h>

int main(void)
{
    int fact, i = 1;
    while (i <= 5)
    {
        int j = 1;
        fact = 1;
        while (j <= i)
        {
            fact = fact * j;
            j++;
        }
        printf("Factorial of %d is = %d \n", i, fact);
        i++;
    }
}