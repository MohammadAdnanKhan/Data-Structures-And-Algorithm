#include <stdio.h>

int main() {
    int n, value, maximum, minimum;
    maximum = -1; 
    minimum = -1; 
    
    printf("Enter the number of values you are entering\n");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid value!\nProgram terminates.\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter the value\n");
        scanf("%d", &value);

        if (value == -1) {
            printf("-1 entered!\nHence the code terminates.\n");
            goto out;
        }

        if (i == 0 || value > maximum) {
            maximum = value;
        }
        
        if (i == 0 || value < minimum) {
            minimum = value;
        }
    }

out:
    if (n > 0 && value != -1) {
        printf("The maximum value of the values entered is %d\n", maximum);
        printf("The minimum value of the values entered is %d\n", minimum);
    }

    return 0;
}
