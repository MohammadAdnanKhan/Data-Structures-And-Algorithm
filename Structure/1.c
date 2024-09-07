#include <stdio.h>
#include <string.h>
struct abc{
    int a;
    float b;
    char c;
    char name [20];
};
//print the structure
void print(struct abc s){
    printf("The value of a is %d\n",s.a);
    printf("The value of b is %f\n",s.b);
    printf("The value of c is %c\n",s.c);
    printf("The value of name is %s\n",s.name);
}
int main(){
    struct abc s;
    s.a=33;
    s.b=44.55;
    s.c='A';
    strcpy(s.name, "Adnan");
    print(s);
    return 0;
    }