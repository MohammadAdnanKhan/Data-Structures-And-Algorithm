//  Find max value, min value and diagonal sum in a 2D array.

#include <stdio.h>

int main() {
    int n, m; 
    printf("Enter the number of rows and columns (n x n for square matrix): ");
    scanf("%d", &n);
    m = n; 

    int arr[n][m];
    printf("Enter the elements of the %dx%d array:\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int max = arr[0][0];
    int min = arr[0][0];
    int diagSum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] > max) max = arr[i][j];
            if (arr[i][j] < min) min = arr[i][j];
            if (i == j) diagSum += arr[i][j];
        }
    }

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    printf("Diagonal sum: %d\n", diagSum);
    return 0;
}