#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Push function
struct Node* push(struct Node* top, int item) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = item;
    new_node->next = top;
    printf("%d pushed onto the stack\n", item);
    return new_node;
}

// Pop function
struct Node* pop(struct Node* top) {
    if (top == NULL) {
        printf("Stack underflow\n");
        return NULL;
    }
    struct Node* temp = top;
    printf("Popped: %d\n", top->data);
    top = top->next;
    free(temp);
    return top;
}

// Display function
void display(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are:\n");
    struct Node* temp = top;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    struct Node* stack = NULL;
    int choice, value;

    while (1) {
        printf("\n*** Stack Menu ***\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to be pushed: ");
                scanf("%d", &value);
                stack = push(stack, value);
                break;
            case 2:
                stack = pop(stack);
                break;
            case 3:
                display(stack);
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