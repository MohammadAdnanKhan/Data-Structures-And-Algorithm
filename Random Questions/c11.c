// Write a C program to dynamically allocate memory for an array of integers, then sort and print the array using pointer notation

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) return 1;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", arr + i);

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) printf("%d ", *(arr + i));
    printf("\n");

    free(arr);
    return 0;
}
