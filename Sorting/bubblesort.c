#include <stdio.h>

// Function to swap two integers
void swap(int *first, int *second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

// Function to print the array
void printArray(int a[], int aSize) {
    for (int i = 0; i < aSize; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// Bubble Sort Algorithm
void bubble(int a[], int aSize) {
    int i, j;
    for (i = 0; i < aSize - 1; i++) {
        // Last i elements are already in place
        for (j = 0; j < aSize - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
            printf("i = %d, ", i);
            printf("j = %d, ", j);
            printArray(a, 5);
        }
    }
}

int main() {
    int inputArr[5] = {7, 8, 0, 2, 6};
    printf("Welcome to Bubble Sort\n***\nUnsorted Array: ");
    printArray(inputArr, 5);
    printf("\n");

    // Using bubble sort algorithm
    bubble(inputArr, 5);

    printf("\nSorted Array: ");
    printArray(inputArr, 5);

    return 0;
}