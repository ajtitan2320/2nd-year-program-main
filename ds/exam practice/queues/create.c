#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int size;
    int front;
    int rear;
    int *q;
}queue;
void create(queue* q1,int size){
    q1->size = size;
    q1->q = (int *)malloc(sizeof(int)*q1->size);
    q1->front = q1->rear = -1;
}
void enqueue(queue* q1,int data){
    if(q1->rear == q1->size){
        printf("stack overflow");
    }
    else{
        q1->rear++;
        q1->q[q1->rear] = data;
    }
}
void dequeue(queue* q1){
    if(q1->rear == q1->front){
        printf("stack underflow");
    }
    else{
        q1->front++;
    }
}
void disp(queue q1){
    if(q1.front == q1.rear){
        printf("stack underflow");
    }
    else{
        while(q1.front!=q1.rear){
            q1.front++;
            printf("%d ",q1.q[q1.front]);
        }
    }
}
int main()
{

    queue q1;
    int s;
    printf("enter the size = ");
    scanf("%d",&s);
    create(&q1,s);
    enqueue(&q1,3);
    enqueue(&q1,4);
    enqueue(&q1,5);
    enqueue(&q1,6);
    dequeue(&q1);
    disp(q1);
    return 0;
}