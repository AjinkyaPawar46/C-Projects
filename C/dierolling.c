#include<stdio.h>
#include<stdio.h>
#include<time.h>

int main(void)
{   
    srand(time(0));
    int a[11]={0};
    for(int i=1;i<=36000;i++)
    {
        int roll1,roll2;
        roll1=1 + rand() % 6;
        roll2=1 + rand() % 6;
        switch (roll1+roll2)
        {
            case 2:
                a[0]++;
                break;
            case 3:
                a[1]++;
                break;
            case 4:
                a[2]++;
                break;
            case 5:
                a[3]++;
                break;
            case 6:
                a[4]++;
                break;
            case 7:
                a[5]++;
                break;
            case 8:
                a[6]++;
                break;
            case 9:
                a[7]++;
                break;
            case 10:
                a[8]++;
                break;
            case 11:
                a[9]++;
                break;
            default:
                a[10]++;
                break;
        }
    }
    printf("%3s%11s \n","Sum","Frequency");
    for(int i=0;i<=10;i++)
    {
        printf("%3d%11d \n",(i+2),a[i]);
    }
}