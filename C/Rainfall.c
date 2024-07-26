#include <stdio.h>

int main(void)
{
    int highrain, currentrain;
    printf("Enter the amount of highest rainfall in one season in your country \n");
    scanf("%d", &highrain);

    printf("Enter the amount of current rainfall in your country in the specific season \n");
    scanf("%d", &currentrain);

    if (currentrain > highrain)
    {
        printf("The current rainfall is the highest rainfall ever in the specific season in your country \n");
        highrain = currentrain;
    }
}