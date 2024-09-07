//printing array using pointers
#include <stdio.h>
int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int *p;
    p=&array[0];
    for (int i = 0; i < 10; i++){
        printf("The value of %d element of the array is %d\n",i,*(p++));
        }
    return 0;
}