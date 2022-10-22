#include <stdio.h>
#include <stdlib.h>
typedef struct nde
{
    int data;
    struct nde *next;
} node;
node *front = NULL;
node *rear = NULL;
void insertion(int data)
{
    node *q = (node *)malloc(sizeof(node));
    if (q == NULL)
    {
        printf("queue is full");
    }
    else
    {
        q->data = data;
        q->next = NULL;
        if (rear == NULL)
        {
            rear = front = q;
        }
        else
        {
            rear->next = q;
            rear = q;
        }
    }
}
void deletion(){
    if(front==NULL){
        printf("underflow");
    }
    else{
        node* temp = front;
        front = front->next;
        free(temp);
    }
}
void print(){
    node* temp = front;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    insertion(1);
    insertion(2);
    insertion(3);
    insertion(4);
    print();
    deletion();
    print();
    return 0;
}