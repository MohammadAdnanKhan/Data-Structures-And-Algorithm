// Find the Missing Number in a sorted Array
#include <stdio.h>
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
int missingnumber(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]!=i+1){
            return i+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("The array is: ");
    printarray(arr,size);
    printf("\n");
    printf("The missing number is %d\n",missingnumber(arr,size));
    return 0;
}