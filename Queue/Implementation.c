// // Queue implementation using array without pointers

#include <stdio.h>

int queue[100];
int front = -1;
int rear = -1;
int size;

void enqueue(int value) {
    if (rear == size - 1) {
        printf("Queue is full\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        queue[++rear] = value;
        printf("%d enqueued to queue\n", value);
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Dequeued element: %d\n", queue[front++]);
        if (front > rear) {
            front = rear = -1;
        }
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d\n", queue[i]);
        }
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


