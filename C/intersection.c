#include<stdio.h>
#define SIZE 10


int main(void)
{
    int a[SIZE],b[SIZE];
    size_t c[SIZE]={0};
    printf("Enter the first set \n");
    for(int i=0;i<SIZE;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the second set \n");
    for(int i=0;i<SIZE;i++)
    {
        scanf("%d", &b[i]);
    }
    int count=0;
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            if(a[i]==b[j])
            {
                c[count]=a[i];
                count++;
                break;
            }
        }
    }
    for(int i=0;i<count;i++)
    {
        printf("%d ", c[i]);
    }
}