#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int merge(int a[], int low, int mid, int high, int size)
{
    int i, j, k;
    i = low;
    k = low;
    j = mid + 1;
    int b[size];
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            k++;
            i++;
        }
        else
        {
            b[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        k++;
        j++;
    }
    for (int t = low; t <= high; t++)
    {
        a[t] = b[t];
    }
}

void mergesort(int a[], int low, int high, int size)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(a, low, mid, size);
        mergesort(a, mid + 1, high, size);
        merge(a, low, mid, high, size);
    }
}

int main()
{
    int size = 10;
    int a[size];
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 90 + 10;
    }
    puts("Unsorted array is : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    puts("");
    mergesort(a, 0, 9, size);
    puts("Sorted array is : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}