#include <stdio.h>

int main(void)
{
    int n, sum1 = 0, sum2 = 0, sum3 = 0, i = 1;
    printf("Enter the end number to which you wanna calculate the sum : \n");
    scanf("%d", &n);

    while (i <= n)
    {
        sum1 = sum1 + i;
        sum2 = sum2 + i * i;
        sum3 = sum3 + i * i * i;

        i++;
    }
    printf("The sum of natural numbers till %d is %d \n", n, sum1);
    printf("The sum of squares of natural numbers till %d is %d \n", n, sum2);
    printf("The sum of cubes of natural numbers till %d is %d \n", n, sum3);
}