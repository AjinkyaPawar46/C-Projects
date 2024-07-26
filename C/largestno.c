#include <stdio.h>

int main(void)
{
    int i = 1, n, largest = 0;
    printf("Enter 10 non-negative numbers to find the largest among them \n");
    while (i <= 10)
    {
        scanf("%d", &n);
        if (n >= largest )
        {
            largest = n;
        }
        i++;
    }
    printf("The largest number is %d", largest);
}