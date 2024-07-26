#include <stdio.h>

int main(void)
{
    int row, col1, col2;
    printf("Enter the rows and column of first matrix and columns of second matrix \n");
    scanf("%d %d %d", &row, &col1, &col2);

    int a[row][col1], b[col1][col2], c[row][col2];
    for(int i=0;i<row;i++)
        {
            for(int j=0;j<col2;j++)
            {
                c[i][j]=0;
            }
        }
    printf("Enter the data for 1st matrix \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the data for 2nd matrix \n");
    for (int i = 0; i < col1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            for (int k = 0; k < col1; k++)
            {
                c[i][j] += (a[i][k]) * (b[k][j]);
            }
        }
    }
    printf("The multiplication of these matrices leads to the matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d ", c[i][j]);
        }
        puts("");
    }
}