// Doubly linked list (insertion + display and deletion + display at any node)

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void insertAtEnd(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void deleteNode(struct Node* head, int value) {
    struct Node* temp = head;

    if (temp == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    if (temp != NULL && temp->data == value) {
        head = temp->next;
        if (head != NULL) head->prev = NULL;
        free(temp);
        printf("Node with value %d deleted.\n", value);
        return;
    }

    while (temp != NULL && temp->data != value) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Node with value %d not found.\n", value);
        return;
    }

    if (temp->next != NULL) temp->next->prev = temp->prev;
    if (temp->prev != NULL) temp->prev->next = temp->next;
    free(temp);
    printf("Node with value %d deleted.\n", value);
}

void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("List elements: ");
    while (head != NULL) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 0;  
    head->prev = NULL;
    head->next = NULL;

    int choice, value;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insertAtEnd(head, value);
                break;

            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteNode(head, value);
                break;

            case 3:
                displayList(head->next); 
                break;

            case 4:
                printf("Exiting program.\n");
                free(head); 
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}