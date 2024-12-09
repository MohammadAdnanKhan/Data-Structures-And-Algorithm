// Complete binary tree (insertion, deletion, traversal, searching)

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int tree[MAX];
int size = 0; 

void insert(int value) {
    if (size == MAX) {
        printf("Tree is full!\n");
        return;
    }
    tree[size++] = value;
    printf("%d inserted into the tree.\n", value);
}

void deleteRoot() {
    if (size == 0) {
        printf("Tree is empty!\n");
        return;
    }
    printf("Deleted root: %d\n", tree[0]);
    tree[0] = tree[size - 1];
    size--;
}

void inorder(int index) {
    if (index >= size) return; 
    inorder(2 * index + 1); 
    printf("%d ", tree[index]); 
    inorder(2 * index + 2); 
}

int search(int value) {
    for (int i = 0; i < size; i++) {
        if (tree[i] == value) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int choice, value, index;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert\n2. Delete Root\n3. In-order Traversal\n4. Search\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insert(value);
                break;

            case 2:
                deleteRoot();
                break;

            case 3:
                printf("In-order Traversal: ");
                inorder(0);
                printf("\n");
                break;

            case 4:
                printf("Enter value to search: ");
                scanf("%d", &value);
                index = search(value);
                if (index != -1) {
                    printf("Found %d at index %d.\n", value, index);
                } else {
                    printf("%d not found.\n", value);
                }
                break;

            case 5:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
