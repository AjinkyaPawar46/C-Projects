#include<stdio.h>

void initialize(int dec[])
{
    for(int i=0;i<52;i++)
    {
        int suit=(i/13)+1;
        int num=(i%13)+1;
        dec[i]=suit*100+num;
    }
}

void print(int dec[])
{
    for(int i=0;i<52;i++)
    {
        int suit=(dec[i]/100);
        int num=(dec[i]%100);
        printf("Card %d is ",i+1);
        switch(num)
        {
            case 1:
                printf("Ace of ");
                break;
        case 2:
                printf("Two of ");
                break;
        case 3:
                printf("Three of ");
                break;
        case 4:
                printf("Four of ");
                break;
        case 5:
                printf("Five of ");
                break;
        case 6:
                printf("Six of ");
                break;
        case 7:
                printf("Seven of ");
                break;
        case 8:
                printf("Eight of ");
                break;
        case 9:
                printf("Nine of ");
                break;
        case 10:
                printf("Ten of ");
                break;
        case 11:
                printf("Jack of ");
                break;
        case 12:
                printf("Queen of ");
                break;
        case 13:
                printf("King of ");
                break;
        default:
                break;
        }
        switch(suit)
        {
            case 4:
                printf("Spades \n");
                break;
        case 3:
                printf("Hearts \n");
                break;
        case 2:
                printf("Diamonds \n");
                break;
        case 1:
                printf("Clubs \n");
                break;
        default:
            break;
        
        }
       
    }
}

void swap(int dec[])
{
    for(int i=0;i<52;i++)
    {
        int j,temp;
        do
        {
            j=rand()%52;
        } while (i==j);
        
        temp=dec[i];
        dec[i]=dec[j];
        dec[j]=temp;
    }
}
int main(void)
{

}