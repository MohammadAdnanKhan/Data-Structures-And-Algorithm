// copying one string to another without using strcpy function
#include <stdio.h>
#include <string.h>

void copy(char str1[],char str2[]){
    int i=0;
    while (str1[i]!='\0'){
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
}

int main(){
    char str1[]="Adnan";
    char str2[34];
    copy(str1,str2);
    printf("The copied string is: %s",str2);

    char str3[34];
    strcpy(str3,str1);
    printf("\nBy inbuilt function, the copied string is: %s",str3);
    
    return 0;
}
