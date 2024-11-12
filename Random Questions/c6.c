//  Write a C program to rearrange an array such that the first element is the maximum, the second is minimum, the third is the second maximum, and so on, without using extra space. For exapmple, given [1,2,3,4,5,6,7], the o/p should be [7,1,6,2,5,3,4]

#include <stdio.h>

void rearrange(int arr[], int n) {
    int maxIdx = n - 1, minIdx = 0;
    int temp;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            temp = arr[i];
            arr[i] = arr[maxIdx];
            arr[maxIdx] = temp;
            maxIdx--;
        } else {
            temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
            minIdx++;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    rearrange(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}