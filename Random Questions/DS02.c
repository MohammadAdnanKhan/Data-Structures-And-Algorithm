// Remove duplicate elements in an array.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int newArr[n], k = 0;
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i] == newArr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            newArr[k++] = arr[i];
        }
    }
    printf("Array without duplicates:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", newArr[i]);
    }
    return 0;
}
