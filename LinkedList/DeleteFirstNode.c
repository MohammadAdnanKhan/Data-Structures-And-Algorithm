#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;  


void deleteFirstNode() {
    if (head == NULL) {
        printf("List is already empty.\n");
        return;
    }

    struct Node* temp = head;

    head = head->next;

    free(temp);

    printf("First node deleted successfully.\n");
}

void printList() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insertAtBeginning(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

int main() {
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtBeginning(30);

    printf("Original List: ");
    printList();

    deleteFirstNode();

    printf("Updated List: ");
    printList();

    return 0;
}
