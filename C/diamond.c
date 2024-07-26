#include<stdio.h>

int main(void)
{
    int n;
    printf("Enter the odd number of rows betwwen 1 and 19 \n");
    scanf("%d", &n);

    for(int i=1; i<=(n-1)/2; i++)
    {
        for(int k=(n-1)/2; k>=i;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        puts("");
    }
    for(int i=1;i<=n;i++)
    {
        printf("*");
    }
    puts("");
    for(int i=(n-1)/2;i>=1;i--)
    {
        for(int k=(n-1)/2; k>=i;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        puts("");
    }

}