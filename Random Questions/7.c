#include <stdio.h>
#include <math.h> // Including math.h as it contains the declaration for sqrt

int main() {
    int a, b, c;
    printf("Enter the value of a, b, and c respectively.\nThe terms have their usual meaning as in a quadratic equation\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    float t = (b * b) - (4 * a * c);
    if (t >= 0) {
        float m = sqrt(t);
        float n = m / (2 * a);
        float x = (-b + n);
        float y = (-b - n);
        printf("The roots of the equation are %f and %f\n", x, y);
    } else {
        printf("The roots of this equation are complex and could not be found by this program");
    }

    return 0;
}
