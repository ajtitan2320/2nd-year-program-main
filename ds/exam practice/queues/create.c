#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int size;
    int front;
    int rear;
    int *arr;
}queue;
void create(queue *q,int size){
    q->size = size;
    q->front = -1;
    q->rear = -1;
    q->arr = (int *)malloc(sizeof(int)*q->size);
}
void insertion(queue* q,int data){
    if(q->rear==q->size){
        printf("overflow");
    }
    else{
        q->rear++;
        q->arr[q->rear]=data;
    }
}
void deletion(queue* q){
    if(q->front==q->rear){
        printf("overflow");
    }
    else{
        q->front++;
    }
}
void print(queue q){
    while(q.front!=q.rear ){
        q.front++;
        printf("%d ",q.arr[q.front]);
    }
}
int main()
{
    queue q;
    int size;
    scanf("%d",&size);
    create(&q,size);
    insertion(&q,1);
    insertion(&q,2);
    insertion(&q,3);
    insertion(&q,4);
    insertion(&q,5);
    insertion(&q,6);
    print(q);
    deletion(&q);
    print(q);
    return 0;
}