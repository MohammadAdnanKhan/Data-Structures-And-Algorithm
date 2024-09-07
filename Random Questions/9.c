#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of terms you want the sum of squares of: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("ERROR!!!!\nEnter a positive integer value.\n");
    } else {
        int SUM = (N) * (N + 1) * (2 * N + 1) / 6;
        printf("The sum of squares of numbers is %d\n", SUM);
    }

    return 0;
}
