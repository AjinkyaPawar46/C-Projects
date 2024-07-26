#include <stdio.h>

int main(void)
{
    int inp, sec, min, hr;
    printf("Enter time in seconds \n");
    scanf("%d", &inp);
    hr = inp / 3600;
    inp = inp % 3600;
    min = inp / 60;
    sec = inp % 60;
    printf("The time is %d:%d:%d", hr, min, sec);
}