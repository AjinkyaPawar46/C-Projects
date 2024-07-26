#include <stdio.h>

struct node
{
    int data;
    struct node *link;
};
void printlist(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked List is empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    puts("");
}
struct node *add_beg(struct node *head, int item)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = item;
    ptr->link = head;
    head = ptr;
    return head;
}
void add_end(struct node *head, int item)
{
    struct node *ptr1 = head;
    while (ptr1->link != NULL)
    {
        ptr1 = ptr1->link;
    }
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = item;
    ptr->link = NULL;
    ptr1->link = ptr;
}
void insert(struct node *head, int item, int pst)
{
    struct node *ptr1 = head;
    while (pst != 2)
    {
        ptr1 = ptr1->link;
        pst--;
    }
    struct node *temp = malloc(sizeof(struct node));
    temp->data = item;
    temp->link = ptr1->link;
    ptr1->link = temp;
}

struct node *del_beg(struct node *head)
{
    if (head == NULL)
    {
        printf("List is already empty \n");
    }

    else
    {
        struct node *ptr = head;
        head = head->link;
        free(ptr);
        ptr = NULL;
    }
    return head;
}
void del_last(struct node *head)
{
    if (head == NULL)
    {
        printf("List is already empty \n");
    }
    else if (head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *ptr = head;
        while (ptr->link->link != NULL)
        {
            ptr = ptr->link;
        }
        free(ptr->link);
        ptr->link = NULL;
    }
}
void delete(struct node **head, int pst)
{
    struct node *current = *head;
    struct node *previous = *head;

    if (*head == NULL)
    {
        printf("List is already empty \n");
    }
    else if (pst == 1)
    {
        *head = current->link;
        free(current);
        current = NULL;
    }
    else
    {
        while (pst != 1)
        {
            previous = current;
            current = current->link;
            pst--;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
    }
}
struct node *delete_list(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        temp = head->link;
        free(head);
        head = temp;
    }
    return head;
}
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 65;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 32;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 46;
    current->link = NULL;
    head->link->link = current;

    printlist(head);

    head = add_beg(head, 1);

    printlist(head);
    add_end(head, 100);
    printlist(head);

    insert(head, 78, 5);
    insert(head, 89, 5);
    insert(head, 21, 3);
    printlist(head);

    head = del_beg(head);
    del_last(head);
    printlist(head);
    delete (&head, 4);
    printlist(head);
    head = delete_list(head);

    if (head == NULL)
    {
        printf("List is successfully destroyed! \n");
    }
}


