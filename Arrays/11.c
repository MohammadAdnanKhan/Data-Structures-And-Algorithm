// move all zeros to the end
// a way is to create a new array
// anotehr way is to do it by swapping

#include <stdio.h>
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void movezeros(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            for (int j = i + 1; j < size; j++) {
                if (arr[j] != 0) {
                    swap(&arr[i], &arr[j]);
                    break;
                }
            }
        }
    }
    printf("The array after moving zeros to the end is: ");
    printarray(arr, size);
}

int main(){
    int arr[]={1,0,2,0,3,0,4,0,5,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("The given array is: ");
    printarray(arr,size);
    printf("\n");
    movezeros(arr,size);
    return 0;
}