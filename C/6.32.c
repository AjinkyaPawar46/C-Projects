#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int findele(int array[], int size, int element){
     if (size == 0)
    {
        return -1;
    }
    if (array[size-1]==element)
    {
        return size-1;
    }
    else
    return findele(array, size-1, element);

}
int main(){
    srand(time(0));
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        array[i]= 1+rand()%100;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",array[i] );
    }
    printf("\n");
    int element;
    scanf("%d", &element);
    printf("index of element is %d",findele(array, 10, element));
    return 0;
}