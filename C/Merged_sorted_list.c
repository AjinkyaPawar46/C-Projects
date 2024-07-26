#include <stdio.h>
#include <stdlib.h>

// Node structure for a linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the end of a linked list
Node* insertNode(Node* head, int data) {
    Node* newNode = createNode(data);
    if (head == NULL)
        return newNode;

    Node* current = head;
    while (current->next != NULL)
        current = current->next;

    current->next = newNode;
    return head;
}

// Function to merge two sorted linked lists
Node* mergeLists(Node* list1, Node* list2) {
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;

    Node* mergedList = NULL;
    if (list1->data <= list2->data) {
        mergedList = list1;
        mergedList->next = mergeLists(list1->next, list2);
    } else {
        mergedList = list2;
        mergedList->next = mergeLists(list1, list2->next);
    }

    return mergedList;
}

// Function to print a linked list
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    // Create the first sorted linked list
    Node* list1 = NULL;
    list1 = insertNode(list1, 1);
    list1 = insertNode(list1, 3);
    list1 = insertNode(list1, 5);
    list1 = insertNode(list1, 7);
    list1 = insertNode(list1, 9);
    list1 = insertNode(list1, 11);
    list1 = insertNode(list1, 13);
    list1 = insertNode(list1, 15);
    list1 = insertNode(list1, 17);
    list1 = insertNode(list1, 19);

    // Create the second sorted linked list
    Node* list2 = NULL;
    list2 = insertNode(list2, 2);
    list2 = insertNode(list2, 4);
    list2 = insertNode(list2, 6);
    list2 = insertNode(list2, 8);
    list2 = insertNode(list2, 10);
    list2 = insertNode(list2, 12);
    list2 = insertNode(list2, 14);
    list2 = insertNode(list2, 16);
    list2 = insertNode(list2, 18);
    list2 = insertNode(list2, 20);

    // Print the first linked list
    printf("List 1: ");
    printList(list1);

    // Print the second linked list
    printf("List 2: ");
    printList(list2);

    // Merge the two lists
    Node* mergedList = mergeLists(list1, list2);

    // Print the merged linked list
    printf("Merged List: ");
    printList(mergedList);

    return 0;
}
