#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
#include<time.h>

int main(void)
{
    srand(time (0));
    int size=20;
    int a[size];
    for(int i=0;i<size;i++)
    {
        a[i]= 1 + rand() % 20;
    }

    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    puts("");
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    for(int k=j;k<size-1;k++)
                    {
                        a[k]=a[k+1];
                    }
                    size--;
                }
                else
                {
                    j++;
                }
            }
            else{j++;}
        }
    }

    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }


}