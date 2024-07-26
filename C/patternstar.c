#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%s", "*");
        }
        puts("");
    }
    puts("");
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 10; j >= i; j--)
        {
            printf("%s", "*");
        }
        puts("");
    }
    puts("");
    for (int i = 1; i <= 10; i++)
    {
        for (int k = 1; k <= i - 1; k++)
        {
            printf(" ");
        }
        for (int j = 10; j >= i; j--)
        {
            printf("%s", "*");
        }
        puts("");
    }
    puts("");
    for (int i = 1; i <= 10; i++)
    {
        for (int k = 10; k >= i + 1; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%s", "*");
        }
        puts("");
    }
}