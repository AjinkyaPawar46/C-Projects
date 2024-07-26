#include <stdio.h>

int main(void)
{
    int type = 1;
    int hrs;
        double salary;
        float sale;
        int items;
        printf("Enter the paycode for the specific employee(1,2,3,4); Enter 0 to end. \n");
    while (type != 0)
    {
        
        scanf("%d", &type);
        
        switch(type)
        {
        case 1:
            printf("Salary of this manager is Rs. 2000 \n");
            break;
        case 2:
            printf("Enter the number of hours : \n");
            scanf("%d", &hrs);
            if (hrs > 40)
            {
                salary = 40 * 20 + (hrs - 40) * 1.5 * 20;
                printf("Salary of this worker is %lf \n", salary);
            }
            else
            {
                printf("Salary of this worker is %d \n", (hrs * 20));
            }
            break;
        case 3:
            printf("Enter the gross weekly sale of the worker: \n");
            scanf("%f", &sale);
            salary = 250 + 0.057 * sale;
            printf("Salary of this worker is %lf \n", salary);
            break;
        case 4:
            printf("Enter number of items produced by this worker : \n");
            scanf("%d", &items);
            printf("Salary of this worker is %d \n", (items * 60));
            break;
        case 0:
            break;
        default:
            printf("This input is wrong, enter a valid input! \n");
            break;
        }
    }
}