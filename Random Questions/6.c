#include <stdio.h>
int main(){
    int Array[8];
    for (int i = 0; i < 8; i++){
        printf("Enter the element of array:");
        scanf("%d",&Array[i]);
        }
    printf("The array in original order is as follows:-\n");
    for (int j = 0; j < 8; j++){
        printf("%d  ",Array[j]);
        }
    printf("\n");
    printf("The array in reversed order is as follows:-\n");
    for (int k = 7; k >=0; k--){
        printf("%d  ",Array[k]);
        }
        return 0;
}