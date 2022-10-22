#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int size;
    int front;
    int rear;
    int * arr;
}queue;
void create(queue *q,int size){
    q->size = size;
    q->front = 0;
    q->rear = 0;
    q->arr = (int *)malloc(sizeof(q->size));
}
void insertion(queue* q,int data){
    if(((q->rear)+1)%q->size==q->front){
        printf("overflow");
    }
    else{
        q->rear = ((q->rear)+1)%q->size;
        q->arr[q->rear] = data;
    }
}
void print(queue q){
    do
    {
        printf("%d ",q.arr[(q.front+1)%q.size]);
        q.front = (q.front+1)%q.size;
    } while ((q.front+1)%q.size!=(q.rear+1)%q.size);
    
}
int main()
{
    queue q;
    create(&q,6);
    insertion(&q,1);
    insertion(&q,5);
    insertion(&q,4);
    insertion(&q,3);
    insertion(&q,2);
    print(q);
    return 0;
}