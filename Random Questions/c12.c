// Swap two strings using pointers

#include <stdio.h>
#include <string.h>

void swapStrings(char *a, char *b) {
    char temp[100];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%99s", str1);
    printf("Enter the second string: ");
    scanf("%99s", str2);

    swapStrings(str1, str2);

    printf("After swapping:\nString 1: %s\nString 2: %s\n", str1, str2);
    return 0;
}
