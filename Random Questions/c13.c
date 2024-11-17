// Copy the contents of one file to another file

#include <stdio.h>

int main() {
    FILE *source = fopen("source.txt", "r");
    FILE *destination = fopen("destination.txt", "w");

    if (!source || !destination) {
        printf("Error opening file.\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);
    printf("File copied successfully.\n");

    return 0;
}
