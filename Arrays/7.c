// remove duplicates from an array
#include <stdio.h>

void printarray(int arr[],int n){
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}

void noduplicates(int arr[], int size) {
    int arr2[size]; 
    int size2 = 0; 

    for (int i = 0; i < size; i++) {
        int found = 0; 
        for (int j = 0; j < size2; j++) {
            if (arr[i] == arr2[j]) {
                found = 1; 
                break;
            }
        }
        if (!found) { 
            arr2[size2] = arr[i];
            size2++;
        }
    }

    printf("The array after removing duplicates is: ");
    printarray(arr2, size2);
}

int main(){
    int arr[]={1,2,3,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("The given array is: ");
    printarray(arr,size);
    printf("\n");
    noduplicates(arr,size);
    return 0;
}