#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a five digit number \n");
    scanf("%d", &num);

    printf("The digits of the given number are : \n");

    int j = 10000;
    for (int i = 0; i < 5; i++)
    {

        int num1 = num / j;
        printf("%d  ", num1 % 10);
        j = j / 10;
    }
}