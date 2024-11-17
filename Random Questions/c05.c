//  Find the union and intersection of two arrays
#include <stdio.h>

int main() {
    int array1[] = {1, 2, 3, 4};
    int array2[] = {3, 4, 5, 6};
    int size1 = 4, size2 = 4;

    printf("Union: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", array1[i]);
    }
    for (int i = 0; i < size2; i++) {
        int isPresent = 0;
        for (int j = 0; j < size1; j++) {
            if (array2[i] == array1[j]) {
                isPresent = 1;
                break;
            }
        }
        if (!isPresent) {
            printf("%d ", array2[i]);
        }
    }

    printf("\nIntersection: ");
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (array1[i] == array2[j]) {
                printf("%d ", array1[i]);
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
