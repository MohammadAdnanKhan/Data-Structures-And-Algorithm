#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;  

void insertNodeAtPosition(int data, int position) {

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Unable to allocate memory.\n");
        return;
    }

    newNode->data = data;
    newNode->next = NULL;

    if (position == 1) {
        newNode->next = head;
        head = newNode;  
        printf("DATA INSERTED SUCCESSFULLY AT POSITION 1\n");
        return;
    }

    struct Node* temp = head;

    for (int i = 1; i < position - 1; i++) {
        temp = temp->next;
        if (temp == NULL) {
            break;
        }
    }

    if (temp != NULL) {
        newNode->next = temp->next;
        temp->next = newNode;

        printf("DATA INSERTED SUCCESSFULLY AT POSITION %d\n", position);
    } else {
        printf("UNABLE TO INSERT DATA AT THE GIVEN POSITION\n");
        free(newNode);  
    }
}

void printList() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insertNodeAtPosition(10, 1);  
    insertNodeAtPosition(20, 2);  
    insertNodeAtPosition(30, 2);
    
    printList();

    return 0;
}
