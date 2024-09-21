//Second largest element in an array
#include <stdio.h>
#include <limits.h>

void makemin(int *a){
    *a=INT_MIN;
}
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
void secondlargest(int arr[],int size){
    int max=arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max){
            max=arr[i];
        }
    }
    int secondmax=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>secondmax && arr[i]<max){
            secondmax=arr[i];
        }
    }
    printf("The array is: ");
    printarray(arr,size);
    printf("\n");
    printf("The second largest element in the array is %d\n",secondmax); 
    }

int main(){
    int arr[]={3,4,5,2,5,9,2,0,8,4,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    secondlargest(arr,size);
    return 0;
}