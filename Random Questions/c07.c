// Create magic square (where the sum of elements in every row, column, and both diagonals is the same) for a given matrix N x N matrix
#include <stdio.h>

void magicsquare(int n, int arr[n][n]) {
    int row = 0, col = n / 2, num = 1;

    while (num <= n * n) {
        arr[row][col] = num++;
        int newRow = (row - 1 + n) % n;
        int newCol = (col + 1) % n;
        if (arr[newRow][newCol]) {
            row = (row + 1) % n;
        } else {
            row = newRow;
            col = newCol;
        }
    }
}

int main() {
    int n;
    printf("Enter the size of the magic square (odd number): ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Magic square is not possible for even numbers.\n");
        return 0;
    }

    int arr[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = 0;

    magicsquare(n, arr);

    printf("Magic Square of size %d:\n", n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%3d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}
