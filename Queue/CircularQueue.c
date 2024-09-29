// // Circular Queue implementation using array
#include <stdio.h>

int queue[100];
int front = -1;
int rear = -1;
int size;

void enqueue(int value) {
    if ((rear + 1) % size == front) {
        printf("Queue is full\n");
    } else {
        if (front == -1) { // Inserting the first element
            front = 0;
        }
        rear = (rear + 1) % size; // Circular increment
        queue[rear] = value;
        printf("%d enqueued to queue\n", value);
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Dequeued element: %d\n", queue[front]);
        if (front == rear) { // Queue is now empty after this operation
            front = rear = -1;
        } else {
            front = (front + 1) % size; // Circular increment
        }
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are:\n");
        int i = front;
        while (i != rear) {
            printf("%d\n", queue[i]);
            i = (i + 1) % size;
        }
        printf("%d\n", queue[rear]); // Print the last element
    }
}

int main() {
    printf("Enter the size of the queue (max 100):\n");
    scanf("%d", &size);

    if (size > 100) {
        printf("Size too large, setting size to 100\n");
        size = 100;
    }

    while (1) {
        printf("\n*** Queue Menu ***");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice (1-4): ");
        
        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int value;
                printf("Enter the element to be enqueued: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            }
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
