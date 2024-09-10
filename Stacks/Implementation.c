#include <stdio.h>

int stack[100];
int top = -1;  
int size;      

void push(int item) {
    if (top == size - 1) {
        printf("Stack is full\n");
    } else {
        stack[++top] = item;
        printf("%d pushed to stack\n", item);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Popped element: %d\n", stack[top--]);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    printf("Enter the size of the stack (max 100):\n");
    scanf("%d", &size);

    if (size > 100) {
        printf("Size too large, setting size to 100\n");
        size = 100;
    }

    while (1) {
        printf("\n*** Stack Menu ***");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice (1-4): ");
        
        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int item;
                printf("Enter the element to be pushed: ");
                scanf("%d", &item);
                push(item);
                break;
            }
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                break;  
            default:
                printf("Invalid choice, please enter a number between 1 and 4.\n");
        }
    }

    return 0;
}
