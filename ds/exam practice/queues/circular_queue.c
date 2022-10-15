#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int size;
    int front;
    int rear;
    int *q;
} queue;
void create(queue *q1, int s)
{
    q1->size = s;
    q1->front = 0;
    q1->rear = 0;
    q1->q = (int *)malloc(sizeof(int) * q1->size);
}
void enqueue(queue *q1, int data)
{
    if ((q1->rear + 1) % q1->size == q1->front)
    {
        printf("overflow");
    }
    else
    {
        q1->rear = (q1->rear + 1) % q1->size;
        q1->q[q1->rear] = data;
    }
}
void dequeue(queue *q1)
{
    if (q1->front == q1->rear)
    {
        printf("underflow");
    }
    else
    {
        q1->front = (q1->front+1)% q1->size;
    }
}
void print(queue q)
{
    int i = q.front+1;
    do
    {
        printf("%d ", q.q[i]);
        i = (i + 1) % q.size;
    } while (i != (q.rear + 1) % q.size);
}
int main()
{
    queue q1;
    int s;
    printf("enter the size = ");
    scanf("%d", &s);
    create(&q1, s);
    enqueue(&q1, 1);
    enqueue(&q1, 2);
    enqueue(&q1, 3);
    enqueue(&q1, 4);
    //enqueue(&q1, 5);
    print(q1);
    dequeue(&q1);
    printf("\n");
    print(q1);
    return 0;
}