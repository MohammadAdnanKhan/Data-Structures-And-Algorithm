#include <stdio.h>
void multiplyby5(int *p){
    *p=*p*5;
    printf("The value is %d\n",*p);
}
int main(){
    int a=8;
    multiplyby5(&a);
    return 0;
}