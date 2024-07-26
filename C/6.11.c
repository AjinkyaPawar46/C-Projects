#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void printarray(int array[]);
int main()
{
    srand(time(0));
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        array[i]=1+rand()%100;
    }
    printf("original array\n");
    printarray(array);
    printf("\nsorted array\n");
    for (int i = 0; i < 10; i++)
    {int j = i;
    int small=array[i];
        for (; j < 10; j++)
        {
            if (array[j]<small)
        {
        small=array[j];
        }
        }
        int k = i;
        for (; k < 10; k++)
        {
            if (array[k]==small)
            {
                break;
            }
            
        }
        
        int temp=array[i];
        array[i]=array[k];
        array[k]=temp;
        
    }
    printarray(array);
    return 0;
}
void printarray(int array[]){
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
}
