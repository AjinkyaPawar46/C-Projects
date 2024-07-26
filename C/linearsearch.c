#include<stdio.h>
#define SIZE 10

int main(void)
{
    int a[SIZE]={2,4,6,6,8,22,3,90,76,32};
    int t=6,p;
    for(int i=0;i<SIZE;i++)
    {
        if(a[i]==t)
        {
            p=i;
            break;
        }
        p=-1;
    }
    if(p!=-1)
    {
        printf("%d is found at index %d",t,p);
    }
    else{
        printf("%d not found",t);
    }
}