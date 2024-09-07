#include <stdio.h>
#include <string.h>
struct abc{
    int marks;
    char name [20];
};
int main(){
    struct abc student[3];
    for (int i = 0; i < 3; i++){
        printf("Enter the marks and name of student %d\n",i+1);
        scanf("%d",&student[i].marks);
        scanf("%s",student[i].name);
        }
        int topper = 0;
    for (int i = 0; i < 3; i++){
        if (student[i].marks>student[topper].marks)
        {
            topper = i;
        }      
    }
    printf("The topper is %s with marks %d\n",student[topper].name,student[topper].marks); 
}