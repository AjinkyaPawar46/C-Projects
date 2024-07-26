#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node
{
    int data;
    struct node *link;
};

struct node *head = NULL;

struct node *insert_beg(struct node *head, int item)
{
    struct node *ptr = malloc(sizeof(struct node));
    struct node *current = head;
    struct node *previous = head;
    ptr->data = item;
    while (current != NULL && item > current->data)
    {
        previous = current;
        current = current->link;
    }
    ptr->link = current;
    if (head == current)
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
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    puts("");
}
struct node *searchList(struct node *head, int value)
{
    if(head == NULL || head->data == value)
    {
        return head;
    }
    
    else
    {
        return searchList(head->link, value);
    }
}
int main()
{
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        int item = 1 + rand() % 100;
        head = insert_beg(head, item);
    }
    int value;
    print(head);
    printf("Enter the number between 1 and 100 that you want to search \n");
    scanf("%d", &value);
    
    struct node *ptr =searchList(head, value);
    if(ptr != NULL)
    {
        printf("%d is found at address %p \n", ptr->data, ptr);
    }
    else
    {
        printf("%d is not found in the list \n", value);
    }
}