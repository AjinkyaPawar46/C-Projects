#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Linked list node structure

struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the beginning of the linked list
void insert(struct Node** head, int data) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;

    // Update the head pointer to the new node
    *head = newNode;
}

// Function to traverse the linked list and find the maximum item
int findMax(struct Node* head) {
    int max = head->data;
    struct Node* current = head->next;

    // Traverse the linked list
    while (current != NULL) {
        if (current->data > max) {
            max = current->data;
        }
        current = current->next;
    }

    return max;
}

// Function to print the linked list
void printLinkedList(struct Node* head) {
    struct Node* current = head;

    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    srand(time(0));
    struct Node* head = NULL;
    int i;

    // Insert 25 random integers into the linked list
    for (i = 0; i < 25; i++) {
        int randomNum = rand() % 100 + 1;  // Generate a random number between 1 and 100
        insert(&head, randomNum);
    }

    printf("Linked List: ");
    printLinkedList(head);

    // Find the maximum item in the linked list
    int max = findMax(head);
    printf("Maximum item: %d\n", max);

    return 0;
}