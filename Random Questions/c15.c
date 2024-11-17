// Develop a C program to read a file and print only those lines that contain a specific word.

#include <stdio.h>
#include <string.h>

int main() {
    char filename[256], word[256], line[1024];
    printf("Enter the filename: ");
    scanf("%s", filename);

    printf("Enter the word to search for: ");
    scanf("%s", word);

    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Error opening file");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, word)) {
            printf("%s", line);
        }
    }

    fclose(file);
    return 0;
}
