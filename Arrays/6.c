//If array is a palindrome
#include <stdio.h>
int ispalindrome(int arr[],int n){
    for (int i = 0; i < n/2; i++){
        if (arr[i]!=arr[n-i-1]){
            return 0;
        }
    }
    return 1;
}
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={1,2,3,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("The array is: ");
    printarray(arr,size);
    printf("\n");
    if (ispalindrome(arr,size)){
        printf("The array is a palindrome\n");
    }
    else{
        printf("The array is not a palindrome\n");
    }
    return 0;
}