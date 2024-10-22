#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void deleteMiddleNode(int position) {
    struct Node *prevNode;

    if (head == NULL) {
        printf("List is already empty.\n");
        return;
    }

    struct Node *toDelete = head;

    if (position == 1) {
        head = head->next;  
        free(toDelete);     
        printf("SUCCESSFULLY DELETED NODE FROM POSITION 1\n");
        return;
    }

    for (int i = 1; i < position; i++) {
        prevNode = toDelete;
        toDelete = toDelete->next;

        if (toDelete == NULL) {
            printf("Invalid position, unable to delete.\n");
            return;
        }
    }

    prevNode->next = toDelete->next;  
    free(toDelete);                   

    printf("SUCCESSFULLY DELETED NODE FROM POSITION %d\n", position);
}

void printList() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insertAtEnd(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

int main() {
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);

    printf("Original List: ");
    printList();

    deleteMiddleNode(3);  

    printf("Updated List: ");
    printList();

    return 0;
}