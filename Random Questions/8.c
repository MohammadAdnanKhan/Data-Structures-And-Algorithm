// This is a code using the quadratic formula, which was discovered by the theories of Al-Khwarizmi
#include <stdio.h>
#include <math.h> // including math.h as it contains the declaration for sqrt

int main() {
    float a, b, c;
    printf("Enter the coefficients of the quadratic equation (a, b, c)\n");
    scanf("%f %f %f", &a, &b, &c);

    float discriminant = b * b - 4 * a * c;

    if (a == 0) {
        printf("This code is not for solving linear equations!!!\nThe coefficient 'a' must be non-zero for a valid quadratic equation.\n");
    } else if (discriminant > 0) {
        float m = sqrt(discriminant);
        float x = (-b + m) / (2 * a);
        float y = (-b - m) / (2 * a);
        printf("The roots are real and distinct and are: %f and %f\n", x, y);
    } else if (discriminant == 0) {
        float x = -b / (2 * a);
        printf("The root is real and repeated and that root is: %f\n", x);
    } else {
        printf("The roots of this equation are complex and could not be found by this program.\n");
    }

    return 0;
}
