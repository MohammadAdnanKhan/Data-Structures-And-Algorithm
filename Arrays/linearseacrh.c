#include <stdio.h>

unsigned int LinearSearch(unsigned int Array[], unsigned int asize, unsigned int key) {
    for (unsigned int i = 0; i < asize; i++) {
        if (Array[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    unsigned int rray[8] = {-4, -5, 0, 5, 78, 22, -33, 65};
    int key;
    printf("Enter the number to search in the array\n");
    scanf("%d", &key);
    unsigned int index = LinearSearch(rray, 8, key);
    printf("The index of %d is %d", key, index);
    return 0;
}