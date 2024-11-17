//  Print the Fibonacci series upto n terms using loops
#include <stdio.h>

int main() {
    int n, firstTerm = 0, secondTerm = 1, currentTerm = 0, Count = 1;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    while (Count <= n) {
        if (Count == 1) {
            printf("%d ", firstTerm);
        } else if (Count == 2) {
            printf("%d ", secondTerm);
        } else {
            currentTerm = firstTerm + secondTerm;
            printf("%d ", currentTerm);

            firstTerm = secondTerm;
            secondTerm = currentTerm;
        }
        Count++;
    }

    printf("\n");
    return 0;
}
