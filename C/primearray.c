#include<stdio.h>

int main(void)
{
    int a[100]={0};
    for(int i=2;i<999;i++)
    {
        a[i]=1;
    }
    for(int i=2;i<999;i++)
    {   
        int t=1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                t=0;
                break;
            }
        }
        if(t==0)
        {
            for(int k=1;k<999;k++)
            {
                if(k*i<=99)
                {a[(k*i)]=0;}
            }
        }
    }
    for(int i=0;i<999;i++)
    {
        if(a[i]==1)
        
            printf("%d ",i);
    }
}