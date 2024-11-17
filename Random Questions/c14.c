// Copy the number of lines, words, and characters in a file

#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "r");
    if (!file) {
        printf("Error opening file.\n");
        return 1;
    }

    int lines = 0, words = 0, characters = 0;
    char ch, prev = ' ';

    while ((ch = fgetc(file)) != EOF) {
        characters++;
        if (ch == '\n') lines++;
        if ((ch == ' ' || ch == '\n') && (prev != ' ' && prev != '\n')) words++;
        prev = ch;
    }

    if (prev != '\n') lines++;  // To count the last line if it doesn't end with a newline

    fclose(file);

    printf("Lines: %d\nWords: %d\nCharacters: %d\n", lines, words, characters);

    return 0;
}
