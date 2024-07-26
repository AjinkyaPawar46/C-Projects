#include<stdio.h>


int determine(int);

int main()
{
    int n,t;
    printf("Enter a number : \n");
    scanf("%d", &n);
    t=determine(n);
    if(t==1)
    {
        printf("The given number is even");
    }
    else
    {
        printf("The given number is odd");

    }
}

int determine(int p)
{
    if(p%2==0)
    {
        return 1;
    }
    else
        {
           return 0; 
        }
}
