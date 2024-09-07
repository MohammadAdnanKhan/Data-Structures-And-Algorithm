#include <stdio.h>
int main(){
    void *p;
    int a=88;
    float b=99.878;
    p=&a;
    printf("The value of a is %d\n",*(int *)p);
    p=&b;
    printf("The value of b is %f\n",*(float *)p);
}