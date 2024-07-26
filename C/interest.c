#include <stdio.h>

int main(void)
{
    float principal, rate, interest;
    int time;
    printf("Enter loan principal (-1 to end) : \n");
    scanf("%f", &principal);
    while (principal != -1)
    {
        printf("Enter the interest rate :\n");
        scanf("%f", &rate);
        printf("Enter the term of the loan in days : \n");
        scanf("%d", &time);

        interest = (principal * rate * time) / 365;
        printf("The interest charge is : %.2f", interest);
        printf("Enter loan principal (-1 to end) : \n");
        scanf("%f", &principal);
    }
}