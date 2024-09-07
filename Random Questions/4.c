#include <stdio.h>

int main() {
    // Question: This is the program to calculate the total amount paid by the customer.
    // Press 1 if you are purchasing b/w 0-1000
    // Press 2 if you are purchasing b/w 1000-2000
    // Press 3 if you are purchasing b/w 2000-5000
    // Press 5 if you are purchasing above 5000

    int amt;
    printf("Press 1 if you are purchasing b/w 0-1000\nPress 2 if you are purchasing b/w 1000-2000\nPress 3 if you are purchasing b/w 2000-5000\nPress 5 if you are purchasing above 5000\n");
    scanf("%d", &amt);

    int type;
    printf("\nPress 1 if you want to purchase winter clothes\n2 for summer clothes\nAny number for casuals\n");
    scanf("%d", &type);

    printf("\n");

    float pur;
    printf("Enter the purchased amount\n");
    scanf("%f", &pur);

    switch (amt) {
        case 1:
            if (type == 1) {
                pur = pur - (pur * 0.05);
            }
            printf("The total amount to be paid is %f\n", pur);
            break;

        case 2:
            if (type == 1) {
                pur = pur - (pur * 0.10);
            } else if (type == 2) {
                pur = pur - (pur * 0.05);
            } else {
                pur = pur - (pur * 0.05);
            }
            printf("The total amount to be paid is %f\n", pur);
            break;

        case 3:
            if (type == 1) {
                pur = pur - (pur * 0.20);
            } else if (type == 2) {
                pur = pur - (pur * 0.10);
            } else {
                pur = pur - (pur * 0.075);
            }
            printf("The total amount to be paid is %f\n", pur);
            break;

        case 5:
            if (type == 1) {
                pur = pur - (pur * 0.50);
            } else if (type == 2) {
                pur = pur - (pur * 0.25);
            } else {
                pur = pur - (pur * 0.10);
            }
            printf("The total amount to be paid is %f\n", pur);
            break;
    }

    return 0;
}