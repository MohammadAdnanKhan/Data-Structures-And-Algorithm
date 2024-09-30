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

// Function to insert a node at the end of the list
struct Node* insertEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);

    // If the list is empty, the new node becomes the head
    if (head == NULL) {
        return newNode;
    }

    // Traverse the list to find the last node
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Insert the new node at the end
    temp->next = newNode;
    return head;
}

// Function to delete a node from the front (like a pop operation)
struct Node* deleteFront(struct Node* head) {
    if (head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return NULL;
    }

    struct Node* temp = head;
    printf("Deleted: %d\n", head->data);
    head = head->next;  // Update head to the next node
    free(temp);         // Free memory of the old head node

    return head;
}

// Function to display the list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;  // Initialize an empty list

    // Insert nodes into the list
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);

    // Display the list
    printf("Current List: ");
    displayList(head);

    // Delete nodes from the front
    head = deleteFront(head);
    head = deleteFront(head);

    // Display the list again
    printf("Updated List: ");
    displayList(head);

    return 0;
}
