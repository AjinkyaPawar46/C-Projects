#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int findelement(int array[],int start,int end,int num){
    if (start > end) {
        return -1;
    }
    int middle= (start+end)/2;
    if (array[middle]==num)
    {
        return middle;
    }
    else if (array[middle]>num)
    {
    return findelement(array, start,middle-1,num);  
    }
    else if (array[middle]<num)
    {
        return findelement(array,middle+1,end,num);
    }

}
int main(){
    srand(time(0));
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        array[i]=1+ rand()%100;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    int num;
    printf("\nInput num: ");
    scanf("%d", &num);
    printf("index of element is %d", findelement(array, 0, 9, num));
    return 0;
}