// Sorting using pointer
#include <stdio.h>
void sort(int *arr,int size){
    for (int i = 0; i < size-1; i++)
    {for (int j = i+1; j < size; j++)
    {if (*(arr+i)>*(arr+j)){
        int temp=*(arr+i);
        *(arr+i)=*(arr+j);
        *(arr+j)=temp;
    }
    }
    }    
}

void print(int *arr,int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",*(arr+i));
    }
}

int main(){
    int arr[]={1,3,2,5,4};
    int size=5;
    printf("Before sorting: ");
    print(arr,size);
    sort(arr,size);
    printf("\nAfter sorting: ");
    print(arr,size);
    return 0;
}