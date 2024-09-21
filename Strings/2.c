// Reversing a String and thus checking if it a palindrome or not
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

int ispalindrome(char str[]){
    int n=strlen(str);
    for (int i = 0; i < n/2; i++){
        if (str[i]!=str[n-i-1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str[]="naman";
    printf("The original string is: %s\n",str);
    reverse(str);
    printf("The reversed string is: %s\n",str);
    if (ispalindrome(str)){
        printf("The string is a palindrome\n");
    }
    else{
        printf("The string is not a palindrome\n");
    }
    return 0;
}