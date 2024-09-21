// Finding the maximum and the minimum element in an array
#include <stdio.h>
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={2,6,4,2,7,9,1,7,3,9,12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max=arr[0]; 
    int min=arr[0];
    for (int i = 0; i < size; i++){
        if (arr[i]>max){
            max=arr[i];
        }
        if (arr[i]<min){
            min=arr[i];
        }
    }
    printf("The array is: ");
    printarray(arr,size);
    printf("\n");
    printf("The maximum element in the array is %d\n",max);
    printf("The minimum element in the array is %d\n",min);
    return 0;
}