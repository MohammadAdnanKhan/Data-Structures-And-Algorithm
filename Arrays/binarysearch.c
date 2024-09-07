#include <stdio.h>
int Binarysearch(int a[], int aSize, int key) 
{int r, l, mid;
r=aSize-1;
l=0;
mid=(r+l)/2;
while (l<=r) 
{if (a[mid]==key) 
{return mid;} 
else if (key>a[mid]) 
{l=mid+1;} 
else 
{r=mid-1;}
mid=(l+r)/2;}
return -1;}
int main() 
{int Array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
printf("The array is as follows:-\n");
for (int i=0;i<10;i++) 
{printf("%d ", Array[i]);}
int key;
printf("\nEnter the key to search: ");
scanf("%d\n", &key);
int index = Binarysearch(Array, 10, key);
if (index!=-1) 
{printf("Key found at index %d\n", index);}
else {printf("Key not found\n");}
return 0;}