//Sort an Array of 0s, 1s, and 2s
#include <stdio.h>
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
void sortarray(int arr[],int size){
    int arr2[size];
    int j=0;
    for (int i = 0; i < size; i++)
    {if (arr[i]==0)
    {arr2[j]=0;
    j++;
    }
    }
    for (int i = 0; i < size; i++)
    {if (arr[i]==1)
    {arr2[j]=1;
    j++;
    }
    }
    for (int i = 0; i < size; i++)
    {if (arr[i]==2)
    {arr2[j]=2;
    j++;
    }
    }
    printf("The sorted array is: ");
    printarray(arr2,size);
    printf("\n");
    }
int main(){
    int arr[]={0,1,2,0,1,2,0,1,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("The array is: ");
    printarray(arr,size);
    printf("\n");
    sortarray(arr,size);
    return 0;
}
