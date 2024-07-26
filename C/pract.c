#include <stdio.h>

int power(int n1)
{
    if(n1 == 1 || n1 == 0)
    {
        return n1;
    }
    else
    {
       return power(n1-1)+ power(n1-2);
    }
}

int main(void)
{
    
    printf("%d", power(18));
    
}
