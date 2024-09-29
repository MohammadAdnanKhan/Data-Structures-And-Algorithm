#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Enqueue function
struct Node* enqueue(struct Node* rear, int data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    if (rear != NULL) {
        rear->next = new_node;
    }
    printf("%d enqueued to the queue\n", data);
    return new_node;
}

// Dequeue function
struct Node* dequeue(struct Node* front) {
    if (front == NULL) {
        printf("Queue underflow\n");
        return NULL;
    }
    struct Node* temp = front;
    printf("Dequeued: %d\n", front->data);
    front = front->next;
    free(temp);
    return front;
}

// Display function
void display(struct Node* front) {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements are:\n");
    struct Node* temp = front;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    struct Node* front = NULL;
    struct Node* rear = NULL;
    int choice, value;

    while (1) {
        printf("\n*** Queue Menu ***\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to be enqueued: ");
                scanf("%d", &value);
                if (front == NULL) {
                    front = rear = enqueue(rear, value);
                } else {
                    rear = enqueue(rear, value);
                }
                break;
            case 2:
                front = dequeue(front);
                if (front == NULL) {
                    rear = NULL;  // If the queue becomes empty, reset rear
                }
                break;
            case 3:
                display(front);
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice, please try again\n");
        }
    }

    return 0;
}
