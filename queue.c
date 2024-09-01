#include <stdio.h>
#include <stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int * arr;
};
int isFull(struct queue *q){
    if (q->r==q->size-1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct queue * q){
    if (q->r==q->f)
    {return 1;
    }
    else{
        return 0;
        }
        }
    
void enqueue(struct queue * q){
    if (isFull(q))
    {
        printf("Queue is full\n");
    }
    else{
    int value;
    printf("Enter the value to be pushed\n");
    scanf("%d",&value);
    q->r++;
    q->arr[q->r]=value;
    }
}
void dequeue(struct queue * q){
    if(isEmpty(q)){
        printf("Queue is empty\n");
    }
    else{
        q->f++;
        printf("The value dequeued is %d\n",q->arr[q->f]);
    }
}
void display(struct queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are: ");
        for (int i = q->f + 1; i <= q->r; i++) {
            printf("%d ", q->arr[i]);
        }
        printf("\n");
    }
}
int main(){
    struct queue * q;
    q->size=5;
    q->f=-1;
    q->r=-1;
    q->arr=(int *)malloc(q->size*sizeof(int));
    while (1)
    {
        printf("\n*** Queue Menu ***");
        printf("\n\n1.Enqueue\n2.Dequeue\n3.Display\nAny other to Exit");
        printf("\n\nEnter your choice(1-2):");
        int ch;
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            enqueue(q);
            break;
        case 2:
            dequeue(q);
            break;
        case 3:
            display(q);
            break;
        default:
            break;
        }
    }
}