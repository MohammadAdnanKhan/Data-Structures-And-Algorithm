// Diamond pattern
#include <stdio.h>  
void pattern(int n){
    for (int i = 0; i < n; i++)
    {for (int j = 0; j < n-1-i; j++)
    {printf(" ");
    }
    for (int j = 0; j < 2*i+1; j++)
    {
        printf("*");
    
    }
    printf("\n");
    }
    for (int i = 0; i < n; i++)
    {for (int j = 0; j < i; j++)
    { printf(" ");
    }
    for (int j = 0; j < 2*(n-i-1)+1; j++)
    {
        printf("*");
    
    }
    printf("\n");
    }
    }

int main(){
    int n=5;
    pattern(n); 
    return 0;
}

