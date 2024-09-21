// Length of string without using inbuilt function
#include <stdio.h>
#include <string.h>

int length(char arr[]){
    int i=0;
    while (arr[i]!='\0'){
        i++;
    }
    return i;
}

int main(){
    char arr[]="Adnan";
    printf("The length of the array is %d\n",length(arr));
    printf("By inbuilt function, the length of array is : %d",strlen(arr));
    return -1;
}