// Sum and average of the array

#include <stdio.h>
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
float sum(int arr[],int size){
    float sum=0;
    for (int i = 0; i < size; i++){
        sum+=arr[i];
    }   
    return sum;
}

float average(int arr[],int size){
    float sumofele=sum(arr,size);
    float average=sumofele/size;
    return average;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};

    int size=sizeof(arr)/sizeof(arr[0]);
    printf("The array is: ");
    printarray(arr,size);
    printf("\n");
    
    printf("The sum of the array is %.3f\n",sum(arr,size));
    printf("The average of the array is %.3f\n",average(arr,size));
    return 0;
}