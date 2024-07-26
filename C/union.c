#include <stdio.h>
#define SIZE 10

int main(void)
{
    int a[SIZE], b[SIZE];
    int c[SIZE] = {0};
    printf("Enter the first set \n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the second set \n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &b[i]);
    }
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (a[i] == b[j])
            {
                c[count] = a[i];
                count++;
                break;
            }
        }
    }
    int temp[SIZE * 2];
    for (int i = 0; i < SIZE; i++)
    {
        temp[i] = a[i];
    }
    for (int i = SIZE; i < SIZE * 2; i++)
    {
        temp[i] = b[i - SIZE];
    }
    int u[SIZE * 2 - count];
    int t = 0;
    for (int i = 0; i < (SIZE * 2); i++)
    {
        int aj = 0;
        for (int j = 0; j < count; j++)
        {
            if (temp[i] != c[j])
            {
                aj = 1;
            }
            else
            {
                aj = 0;
                break;
            }
        }
        if (aj == 1)
        {
            u[t] = temp[i];
            t++;
        }
    }
    t = 0;
    for (int i = (SIZE * 2 - count * 2); i < (SIZE * 2 - count); i++)
    {
        u[i] = c[t];
        t++;
    }
    printf("Intersection is \n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", c[i]);
    }
    puts("");
    printf("Union is \n");
    for (int i = 0; i < (SIZE * 2 - count); i++)
    {
        printf("%d ", u[i]);
    }
}