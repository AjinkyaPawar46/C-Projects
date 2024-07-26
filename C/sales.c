#include <stdio.h>

int main(void)
{
    float sale, commission;
    printf("Enter sales in dollars (-1 to end) : ");
    scanf("%f", &sale);
    while (sale != -1)
    {
        commission = (9 * sale) / 100;
        printf("Salary is : %.2f\n", commission + 200);
        printf("Enter sales in dollars (-1 to end): \n");
        scanf("%f", &sale);
    }
}