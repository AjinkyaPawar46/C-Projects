#include <stdio.h>

int main(void)
{
    int i = 1;
    printf("N\tN^2\tN^3\tN^4 \n");
    while (i <= 10)
    {
        printf("%d\t%d\t%d\t%d \n", i, i * i, i * i * i, i * i * i * i);
        i++;
    }
}