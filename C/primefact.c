#include<stdio.h>

int main(void)
{
    int num, i = 2;
    printf("Enter a number to check whether its a prime number or not \n");
    scanf("%d", &num);
    printf("The prime factors are: ");
    while (i <= num - 1)
    {
        if (num % i == 0)
        {
            int j=2,t =1;
            while(j <=i-1)
            {

                if(i%j ==0 )
                {
                    t=0;
                    break;
                }
                j++;
            }
            if(t==1)
            {
                int rem=0; int temp=num;
                while(rem == 0)
                {
                    printf("%d ", i);
                    temp= temp/i;
                    rem=temp%i;
                    
                }
            }
        }
        i++;
    }
}