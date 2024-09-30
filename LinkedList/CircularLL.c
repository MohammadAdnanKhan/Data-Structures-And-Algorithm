#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the circular linked list
struct Node* insertEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);

    // If the list is empty, make the new node point to itself
    if (head == NULL) {
        newNode->next = newNode;
        return newNode;
    }

    // Traverse to the last node (which points to the head)
    struct Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    // Insert the new node at the end and update its next to point to the head
    temp->next = newNode;
    newNode->next = head;
    return head;
}

// Function to display the circular linked list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);  // Continue until we reach back to the head

    printf("(head)\n");
}

int main() {
    struct Node* head = NULL;  // Initialize an empty circular linked list

    // Insert nodes into the list
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);

    // Display the list
    printf("Circular Linked List: ");
    displayList(head);

    return 0;
}
