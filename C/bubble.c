#include <stdio.h>
#define SIZE 10

int main()
{
    int a[SIZE] = {2, 6, 3, 87, 43, 21, 32, 76, 91, 22, 7};

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE - 1; j++)
        {
            int temp;
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
}