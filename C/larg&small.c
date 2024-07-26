#include<stdio.h>

int main()
{
    int num1,num2,num3;
    printf("Enter three different numbers : ");
    scanf("%d %d %d", &num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("The largest no. is %d", num1);
            if(num2>num3)
            {
                printf("The smallest no. is %d", num3);
            }
            else
            {
                printf("The smallest no. is %d", num2);
            }
        }
        else
        {
            printf("The largest no. is %d", num3);
            printf("The smallest no. is %d", num2);
            
        }
    }
    else
    {
        printf("The largest no. is %d", num2);
        if(num1>num3)
        {
            printf("The smallest no. is %d", num3);
        }
        else
        {
            printf("The smallest no. is %d", num1);
        }
    }




}