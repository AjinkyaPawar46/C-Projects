#include <stdio.h>

int main(void)
{
    int num, i = 2, t = 0;
    printf("Enter a number to check whether its a prime number or not \n");
    scanf("%d", &num);
    while (i <= num - 1)
    {
        if (num % i == 0)
        {
            t = 1;
            break;
        }
        i++;
    }
    if (t == 1)
    {
        printf("%d is not a prime number", num);
    }
    else
    {
        printf("%d is a prime number", num);
    }
}