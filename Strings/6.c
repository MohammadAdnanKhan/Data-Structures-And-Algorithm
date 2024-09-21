// String Comparison without inbuilt function
#include <stdio.h>

int compare(char str1[],char str2[]){
    int size1=0;
    int size2=0;
    while (str1[size1]!='\0'){
        size1++;
    }
    while (str2[size2]!='\0'){
        size2++;
    }
    int i=0;
    if (size1!=size2){
        return 0;
    }
    else{
    while (str1[i]!='\0' && str2[i]!='\0'){
        if (str1[i]!=str2[i]){
            return 0;
        }
        i++;
    }
        return 1;
        }
}

int main(){
    char str1[]="Adnan";
    char str2[]="Adn";
    if (compare(str1,str2)){
        printf("The strings are equal\n");
    }
    else{
        printf("The strings are not equal\n");
    }
    return 0;
}