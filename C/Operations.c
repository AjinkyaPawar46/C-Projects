#include<stdio.h>


int main()
{
    int int1,int2;

    printf("Enter the first number \n");
    scanf("%d", &int1);
    
    printf("Enter the second number \n");
    scanf("%d", &int2);

    int sum,diff,prod,div;
    sum = int1 + int2;
    prod = int1 * int2;
    if (int1>int2)
    {
        diff = int1 - int2;
    
        div = int1 / int2;
    }
    else
    {
        diff = int2 - int1;
    
        div = int2 / int1;
    }
    printf("Sum is %d \n", sum);
    printf("Difference is %d \n", diff);
    printf("Product is %d \n", prod);
    printf("Division is %d \n", div);

    return  0;
}