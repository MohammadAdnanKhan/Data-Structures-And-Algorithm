//author-Mohd Adnan Khan
#include<stdio.h>

//function for printing an array
void printArray(int* A, int n) //n is the size of array
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

//selection sort alorithm...
void selectionSort(int *A, int n)
{
    int indexofmin, temp;
    printf("Running Selection sort...  :)\n");
    for (int i = 0; i < n-1; i++)
    {
        indexofmin = i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j] < A[indexofmin])
            {
                indexofmin = j;
            }
        }
        // Swapping A[i] and A[indexofmin]...
        temp = A[i];
        A[i] = A[indexofmin];
        A[indexofmin] = temp;
    }
}

//Execution starts from here....
int main()
{
    int A[] = {3, 5, 2, 13, 12};
    int n = 5;

    //calling the functions...
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);

    return 0;
}