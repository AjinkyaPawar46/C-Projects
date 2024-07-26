#include <stdio.h>

int main(void)
{
    int s, i = 1, j = 1;
    printf("Enter the side of the square (btwn 1 to 20): \n");
    scanf("%d", &s);

    while (j <= s)
    {
        printf("*");
        j++;
    }

    while (i <= s - 2)
    {
        int j = 1;
        printf("\n*");
        while (j <= s - 2)
        {
            printf(" ");
            j++;
        }

        printf("*");
        i++;
    }
    j = 1;
    printf("\n");
    while (j <= s)
    {
        printf("*");
        j++;
    }
}