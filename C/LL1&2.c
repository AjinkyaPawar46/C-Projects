#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct node 
{
    int data;
    struct node *link;
};

struct node *head = NULL;

struct node *insert_beg(struct node *head, int item)
{
    struct node *ptr= malloc(sizeof(struct node));
    struct node *current = head;
    struct node *previous = head;
    ptr->data = item;
    while(current!= NULL && item > current->data)
    {
        previous = current;
        current = current->link;
    }
    ptr->link = current;
    if(head == current)
    {
        head = ptr;
        return head; 
    }
    else
    {
        previous->link = ptr;
        return head;
    }
    
}
void print(struct node *head)
{
    struct node *ptr = head;
    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    puts("");
}
int average(struct node * head)
{
    struct node *ptr = head;
    int total=0;
    while(ptr!=NULL)
    {
        total +=ptr->data; 
        ptr = ptr->link;
    }
    return total/25;
}
int maximum(struct node *head)
{
    struct node *ptr = head;
    int max=0;
    while(ptr!=NULL)
    {
        if(ptr->data > max)
        {
            max = ptr->data;
        }
        ptr = ptr->link;
    }
    return max;
}
int main()
{
    srand(time(0));
    for(int i=0;i<25; i++)
    {
        int item=1+rand()%100;
        head = insert_beg(head, item);
    }
    print(head);
    printf("The maximum in the data in the list is %d \n",maximum(head));
    printf("The average of the data in the list is %d \n",average(head));
}