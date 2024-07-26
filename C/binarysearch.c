#include <stdio.h>

int search(const int a[], int key, int low, int high)
{
    while (low <= high)
    {
        for (int i = low; i <= high; i++)
        {
            printf("%d ", a[i]);
        }
        puts("");
        int mid = (low + high) / 2;
        if (key == a[mid])
        {
            return mid;
        }
        else if (key > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int size = 10, searchkey, index;
    int a[size];
    // srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        a[i] = 2 * i;
    }
    printf("Enter any number between 0 and 18 \n");
    scanf("%d", &searchkey);

    index = search(a, searchkey, 0, 9);
    if (index != -1)
    {
        printf("%d is found at index %d", searchkey, index);
    }
    else
    {
        printf("%d not found", searchkey);
    }
}