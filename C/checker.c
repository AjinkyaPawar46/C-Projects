#include <stdio.h>

int main(void)
{
    int n, i = 1;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    while (i <= n)
    {
        int j = 1;
        if (i % 2 != 0)
        {
            while (j <= n)
            {
                if (j % 2 != 0)
                {
                    printf("*");
                }
                else if (j % 2 == 0)
                {
                    printf(" ");
                }
                j++;
            }
        }
        else if (i % 2 == 0)
        {
            while (j <= n)
            {
                if (j % 2 == 0)
                {
                    printf("*");
                }
                else if (j % 2 != 0)
                {
                    printf(" ");
                }
                j++;
            }
        }
        puts("");
        i++;
    }
}