#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter 2 numbers\n");
    scanf("%d %d", &x, &y);
    int t;
    if(x>y)
    {
        while(y > 0)
        {
            t=y;
            y = x % y;
            x=t;
        }
        printf("The GCD is %d ", x);
    }
    else{
        while(x > 0)
        {
            t=x;
            x = y % x;
            y=t;
        }
        printf("The GCD is %d ", y);
    }
}