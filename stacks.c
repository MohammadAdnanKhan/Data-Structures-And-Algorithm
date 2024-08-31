#include <stdio.h>
#include <stdlib.h>
struct stack{
    int top;
    int size;
    int *ptr;
};
int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    return 0;
}
int isFull(struct stack *ptr){
    if (ptr->top==ptr->size-1)
    {return 1;
    }
    return 0;
}
void push(struct stack *ptr){
    int value;
    printf("Enter the value to be pushed\n");
    scanf("%d",&value);
    if (!isFull(ptr))
    {ptr->top++;
    ptr->ptr[ptr->top]=value;
    }else{
        printf("Stack is full\n");
    }   
}
int pop(struct stack *ptr){
    if(!isEmpty(ptr)){
        int value=ptr->ptr[ptr->top];
        ptr->top--;
        printf("The value popped is %d\n",value);
    }else{
        printf("Stack is empty\n");
    }
}
void display(struct stack *ptr){
    for (int i = 0; i <= ptr->top; i++)
    {printf("%d\n",ptr->ptr[i]);
    }   
}
int main(){
   
    struct stack *s;
    s->size=5;
    s->top=-1;
    s-> ptr=(int *)malloc(s->size*sizeof(int));
    while (1){    
     printf("\n*** Stack Menu ***");
     printf("\n\n1.Push\n2.Pop\n3.Display\nAny other to Exit");
     printf("\n\nEnter your choice(1-4):");
     int ch;
     scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        push(s);
        break;
    case 2:
        pop(s);
        break;
    case 3:
        display(s);
        break;
    default:
        break;
    }
}}