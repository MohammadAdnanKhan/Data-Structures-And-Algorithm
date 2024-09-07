// This is a program to compute CGPA
#include <stdio.h>

int CGPAcalculator() {
    float cgpa = 0;
    
    for (int i = 0; i < 8; i++) {
        printf("Enter the CGPA in %d semester: ", i + 1);
        float temp;
        scanf("%f", &temp);

        if (temp > 10 || temp < 0) {
            printf("Invalid input!\nExiting the program\n");
            goto end;
        }
        printf("\n");
        cgpa += temp;
    }

    printf("The CGPA obtained by the student is %.2f\n", cgpa / 8);

end:
    return 0;
}

int main() {
    CGPAcalculator();
    return 0;
}