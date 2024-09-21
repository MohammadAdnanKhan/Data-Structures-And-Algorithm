// merge 3 arrays
#include <stdio.h>
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
void merge(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3){
    int arr4[n1+n2+n3];
    for (int i = 0; i < n1; i++){
        arr4[i]=arr1[i];
    }
    for (int i = 0; i < n2; i++){
        arr4[n1+i]=arr2[i];
    }
    for (int i = 0; i < n3; i++){
        arr4[n1+n2+i]=arr3[i];
    }
    printf("The merged array is: ");
    printarray(arr4,n1+n2+n3);
}
int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9,10};
    int arr3[]={11,12,13,14,15};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int size3=sizeof(arr3)/sizeof(arr3[0]);
    printf("The first array is: ");
    printarray(arr1,size1);
    printf("\n");
    printf("The second array is: ");
    printarray(arr2,size2);
    printf("\n");
    printf("The third array is: ");
    printarray(arr3,size3);
    printf("\n");
    merge(arr1,arr2,arr3,size1,size2,size3);
    return 0;
}