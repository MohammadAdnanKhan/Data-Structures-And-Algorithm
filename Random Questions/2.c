#include <stdio.h>

int cube(int n, int m) {
    int cubeans = (n * n * n) + (m * m * m) + (3 * n * n * m) + (3 * n * m * m);
    return cubeans;
}

int main() {
    int a, b;
    
    printf("Enter the first number: ");
    scanf("%d", &a);
    
    printf("Enter the second number: ");
    scanf("%d", &b);
    
    int cubeofnos = cube(a, b);
    
    printf("The answer is %d\n", cubeofnos);
    
    return 0;
}