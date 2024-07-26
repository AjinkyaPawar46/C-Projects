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
struct node *head3 = NULL;

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
    struct node *ptr1 = head;
    struct node *ptr2 = head2;
    struct node *ptr3 = NULL;
    struct node *ptr = head3;
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data > ptr2->data)
        {
            ptr3 = malloc(sizeof(struct node));
            ptr3->data = ptr2->data;

            ptr3->link = NULL;
            if (head3 == NULL)
            {

                head3 = ptr3;
                ptr = head3;
            }
            else
            {
                ptr->link = ptr3;
                ptr = ptr->link;
            }
            ptr2 = ptr2->link;
        }
        else
        {
            ptr3 = malloc(sizeof(struct node));
            ptr3->data = ptr1->data;

            ptr3->link = NULL;
            if (head3 == NULL)
            {
                head3 = ptr3;
                ptr = head3;
            }
            else
            {
                ptr->link = ptr3;
                ptr = ptr->link;
            }
            ptr1 = ptr1->link;
        }
    }
    while (ptr1 != NULL)
    {
        ptr3 = malloc(sizeof(struct node));
        ptr3->data = ptr1->data;
        ptr3->link = NULL;
        ptr->link = ptr3;
        ptr = ptr->link;
        ptr1 = ptr1->link;
    }
    while (ptr2 != NULL)
    {
        ptr3 = malloc(sizeof(struct node));
        ptr3->data = ptr2->data;
        ptr3->link = NULL;
        ptr->link = ptr3;
        ptr = ptr->link;
        ptr2 = ptr2->link;
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
    for (int i = 0; i < 10; i++)
    {
        int item = 1 + rand() % 100;
        head2 = insert_beg(head2, item);
    }
    print(head);
    print(head2);
    merge(head, head2);
    print(head3);
}