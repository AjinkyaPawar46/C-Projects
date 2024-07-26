#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node
{
    int data;
    struct node *link;
};

struct node *head = NULL;
struct node *head2 = NULL;

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
void merge(struct node *head, struct node *head2)
{
    struct node *ptr = head;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = head2;
    head2 = NULL;
}

int main()
{
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        int item = 1 + rand() % 100;
        head = insert_beg(head, item);
    }
    for (int i = 0; i < 10; i++)
    {
        int item = 1 + rand() % 100;
        head2 = insert_beg(head2, item);
    }
    print(head);
    print(head2);
    merge(head, head2);
    print(head);
}