#include <stdio.h>

int main() {
    int Array[10];
    int sumOfEven = 0;
    int productOfOdd = 1;

    printf("Enter 10 elements of the array:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &Array[i]);

        if (Array[i] % 2 == 0) {
            sumOfEven += Array[i];
        } else {
            productOfOdd *= Array[i];
        }
    }

    printf("\nThe array is as follows:\n");
    for (int j = 0; j < 10; j++) {
        printf("%d ", Array[j]);
    }
    printf("\n");

    printf("The sum of even numbers is %d.\n", sumOfEven);
    printf("The product of odd numbers is %d.\n", productOfOdd);

    return 0;
}