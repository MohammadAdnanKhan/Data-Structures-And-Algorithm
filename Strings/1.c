//Reversing a String 
#include <stdio.h>
#include <string.h>
void reverse(char str[]){
    int n=strlen(str);
    for (int i = 0; i < n/2; i++){
        char temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
}

int main(){
    char str[]="Hello";
    printf("The original string is: %s\n",str);
    reverse(str);
    printf("The reversed string is: %s\n",str);
    return 0;
}