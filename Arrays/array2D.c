#include <stdio.h>
int main(){
    int marks [3][4] ={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 4; j++)
       {
       printf("the value of %d,%d elememt of this 2D array is %d\n",i,j,marks [i][j]);
       }}
       return 0;
}