// frequency of each element in an array
#include <stdio.h>
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
void frequency(int arr[], int size) {
    int counted[size]; 
    for (int i = 0; i < size; i++) {
        counted[i] = 0; 
    }

    for (int i = 0; i < size; i++) {
        if (counted[i] == 0) { 
            int count = 1;  
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    counted[j] = 1; 
                }
            }
            printf("The frequency of %d is %d\n", arr[i], count);
        }
    }
}
int main(){
    int arr[]={1,1,1,1,2,2,3,3,4,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("The given array is: ");
    printarray(arr,size);
    printf("\n");
    frequency(arr,size);
    return 0;
}