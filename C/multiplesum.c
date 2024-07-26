#include <stdio.h>

int main(void)
{
    int sum = 0, i = 1;
    while (i <= 14)
    {
        sum = sum + 7 * i;
        i++;
    }
    printf("The sum of multiples of 7 between 1 to 100 is : %d", sum);
}