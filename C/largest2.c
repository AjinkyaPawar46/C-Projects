#include <stdio.h>

int main(void)
{
    int i = 1, n, largest = 0, l2 = 0;
    printf("Enter 10 non-negative numbers to find the largest among them \n");
    while (i <= 10)
    {
        scanf("%d", &n);
        if (n >= l2 && n >= largest)
        {
            l2 = largest;
            largest = n;
        }
        else if (n >= l2 && n < largest)
        {
            l2 = n;
        }
        i++;
    }
    printf("The largest number is %d \n", largest);
    printf("The second largest number is %d", l2);
}