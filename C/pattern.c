#include <stdio.h>

int main(void)
{
    int s, i = 1;
    printf("Enter the side of the square (btwn 1 to 20): \n");
    scanf("%d", &s);
    while (i <= s)
    {
        int j = 1;
        while (j <= s)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}