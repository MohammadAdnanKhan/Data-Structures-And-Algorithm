#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct abc{
    int marks;
    char name [20];
};
int main(){
    struct abc *student[3];
    for (int i = 0; i < 3; i++){
        student[i] = (struct abc *)malloc(sizeof(struct abc));
        printf("Enter the marks and name of student %d\n",i+1);
        scanf("%d",&student[i]->marks);
        scanf("%s",student[i]->name);
        }
        int topper = 0;
    for (int i = 0; i < 3; i++){
        if (student[i]->marks>student[topper]->marks)
        {
            topper = i;
        }      
    }
    printf("The topper is %s with marks %d\n",student[topper]->name,student[topper]->marks); 
    for (int i = 0; i < 3; i++) {
        free(student[i]);
    }
    return 0;
}