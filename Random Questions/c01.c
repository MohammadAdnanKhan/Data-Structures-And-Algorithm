// Calculate the size of various data types in bytes, then print the size in bits
#include <stdio.h>

int main() {
    printf("Size of int -> %d bits\n", sizeof(int) * 8);
    printf("Size of char -> %d bits\n", sizeof(char) * 8);
    printf("Size of float -> %d bits\n", sizeof(float) * 8);
    printf("Size of double -> %d bits\n", sizeof(double) * 8);
    printf("Size of long -> %d bits\n", sizeof(long) * 8);
    printf("Size of short -> %d bits\n", sizeof(short) * 8);
    
    return 0;
}
