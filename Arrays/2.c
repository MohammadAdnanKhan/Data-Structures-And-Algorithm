// code tp reverse an array
 #include <stdio.h>
 void swap(int *a,int *b){
     int temp=*a;
     *a=*b;
     *b=temp;
 }

 void reversearray(int arr[],int n){
    for (int i = 0; i < n/2; i++){
        swap(&arr[i],&arr[n-i-1]);
    }
 }

 void printarray(int arr[],int n){
     for (int i = 0; i < n; i++){
         printf("%d",arr[i]);
     }
 }

 int main(){
    int size=7;
    int arr[]={1,2,3,4,5,6,7};
    printf("The original array is: ");
    printarray(arr,size);
    reversearray(arr,size);
    printf("\n");
    printf("The reversed array is: ");
    printarray(arr,size);
    return 0;
    }