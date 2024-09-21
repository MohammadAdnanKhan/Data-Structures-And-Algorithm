//Count Vowels and Consonants
#include <stdio.h>
#include <string.h>

void count(char str[]){
    int vowels=0;
    for (int i = 0; i < strlen(str); i++){
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            vowels++;
        }
    }
    printf("The number of vowels in the string is: %d\n",vowels);
    printf("The number of consonants in the string is: %d\n",strlen(str)-vowels);
}

int main(){
    char str[]="Adnan";
    count(str);
    return 0;
}