#include <stdio.h>

int main(void)
{
    int num, sum = 0, avg, t, i = 1;
    printf("Enter the amount of numbers you want to sum : \n");
    scanf("%d", &t);
    printf("Enter the numbers you want to sum : \n");
    while (i <= t)
    {
        scanf("%d", &num);
        sum = sum + num;
        i++;
    }
    avg = sum / t;
    printf("The sum of the numbers is %d \n", sum);
    printf("The average of the numbers is %d \n", avg);
}