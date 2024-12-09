// Menu driven program for stack operations (push, pop, isempty, isfull, peek, exit) using array

#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push() {
    if (top == MAX - 1) {
        printf("Stack is full!\n");
    } else {
        int value;
        printf("Enter value to push: ");
        scanf("%d", &value);
        stack[++top] = value;
        printf("%d pushed into the stack.\n", value);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("%d popped from the stack.\n", stack[top--]);
    }
}

void isEmpty() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack is not empty.\n");
    }
}

void isFull() {
    if (top == MAX - 1) {
        printf("Stack is full.\n");
    } else {
        printf("Stack is not full.\n");
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Top element is %d.\n", stack[top]);
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Push\n2. Pop\n3. Is Empty\n4. Is Full\n5. Peek\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: isEmpty(); break;
            case 4: isFull(); break;
            case 5: peek(); break;
            case 6: printf("Exiting program.\n"); return 0;
            default: printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}