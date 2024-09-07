#include <stdio.h>
int main(){
    int marks [] = {5,6,89,23,44,55,66,77,88,99,66,99,88,77,55,44,44,456,78,66};
    for (int i = 0; i < 20; i++)
    {
        printf("The value of %d element of the array is %d\n",i, marks [i]);
    }
    return 0;
}