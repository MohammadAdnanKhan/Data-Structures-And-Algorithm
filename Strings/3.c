// Checking if a string is palindrome or not by taking extra space
#include <stdio.h>
#include <string.h>

int palindrome(char str[]){
    int size=strlen(str);
    char rev[size];
    for (int i = 0; i < size; i++){
        rev[i]=str[size-i-1];
    }
    for (int i = 0; i < size; i++){
        if (str[i]!=rev[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str[]="naman";
    if (palindrome(str)){
        printf("The string is a palindrome\n");
    }
    else{
        printf("The string is not a palindrome\n");
    }
    return 0;
}