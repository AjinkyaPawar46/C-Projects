#include <stdio.h>
int recursiveMinimum(int a[], int size);
int main(void)
{
    int size;
    printf("Enter size of array \n");
    scanf("%d", &size);
    int a[size];
    printf("Enter the data in the array \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The minimum number in the array is %d", recursiveMinimum(a,size));
}

int recursiveMinimum(int a[], int size)
{
    if(size==1)
    {
        return a[size-1];
    }
    else
    {
           int temp;
            if(a[size-1]<a[size-2])
            {
                temp= a[size-2];
                a[size-2]=a[size-1];
                a[size-1]=temp; 
            }
            size--;
            recursiveMinimum(a,size);
    }
}