//pointer to pointer
#include <stdio.h>
int main(){
    int a, *p, **t;
    a=78;
    p=&a;
    t=&p;
    printf("The value of a is %d\n",**t);
    return 0;}