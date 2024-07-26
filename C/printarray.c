#include<stdio.h>


void printarray(int a[],int size)
{
    if(size==1)
    {
        printf("%d ",a[size-1]);
    }
    else
    {
        size--;
        printarray(a,size);
        printf("%d ",a[size]);
    }
}

int main(void)
{
 int size;
 printf("Enter size of array \n");
 scanf("%d",&size);
 int a[size];
 printf("Enter the data in the array \n");
 for(int i=0;i<size;i++)
 {
    scanf("%d",&a[i]);
 }
 printarray(a,size);


}