// Menu driven program for queue operations (enqueue, dequeue, isempty, isfull, peek, getfront, getrear, exit) using array
#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void enqueue() {
    if (rear == MAX - 1) {
        printf("Queue is full!\n");
    } else {
        int value;
        printf("Enter value to enqueue: ");
        scanf("%d", &value);
        if (front == -1) front = 0; // Set front if queue was empty
        queue[++rear] = value;
        printf("%d enqueued into the queue.\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
    } else {
        printf("%d dequeued from the queue.\n", queue[front++]);
        if (front > rear) front = rear = -1; // Reset queue when empty
    }
}

void isEmpty() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue is not empty.\n");
    }
}

void isFull() {
    if (rear == MAX - 1) {
        printf("Queue is full.\n");
    } else {
        printf("Queue is not full.\n");
    }
}

void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
    } else {
        printf("Front element is %d.\n", queue[front]);
    }
}

void getFront() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
    } else {
        printf("Front element is %d.\n", queue[front]);
    }
}

void getRear() {
    if (rear == -1) {
        printf("Queue is empty!\n");
    } else {
        printf("Rear element is %d.\n", queue[rear]);
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Enqueue\n2. Dequeue\n3. Is Empty\n4. Is Full\n5. Peek\n6. Get Front\n7. Get Rear\n8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: isEmpty(); break;
            case 4: isFull(); break;
            case 5: peek(); break;
            case 6: getFront(); break;
            case 7: getRear(); break;
            case 8: printf("Exiting program.\n"); return 0;
            default: printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
