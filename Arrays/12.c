// intersection of 2 arrays
#include <stdio.h>

void printarray(int arr[],int n){
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}

int intersectionsize(int arr1[],int arr2[],int size1,int size2){
    int size3=0;
    for (int i = 0; i < size1; i++){
        for (int j = 0; j < size2; j++){
            if (arr1[i]==arr2[j]){
                size3++;
                break;
            }
        }
    }
    return size3;
}

void intersection(int arr1[],int arr2[],int size1, int size2){
    int size3=intersectionsize(arr1,arr2,size1,size2);
    int arr3[size3];
    int k=0;
    for (int i = 0; i < size1; i++){
        for (int j = 0; j < size2; j++){
            if (arr1[i]==arr2[j]){
                arr3[k++]=arr1[i];
                break;
            }
        }
    }
    printf("The intersection of the two arrays is: ");
    printarray(arr3,size3);
    printf("\n");
}

int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={4,5,6,7,8};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    printf("The first array is: ");
    printarray(arr1,size1);
    printf("\n");
    printf("The second array is: ");
    printarray(arr2,size2);
    printf("\n");
    intersection(arr1,arr2,size1,size2);
    return 0;
}