#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* front = NULL;
struct node* rear = NULL;
void enqueue(int data){
    struct node* q;
    q = (struct node* )malloc(sizeof(struct node*));
    if(q==NULL){
        printf("Queue Is Full");
    }
    else{
        q->data = data;
        q->next = NULL;
        if(front == NULL){
            front = rear = q;
        }
        else{
            rear->next = q;
            rear = q;
        }
    }
}
void dequeue(){
    if(front == NULL){
        printf("underflow");
    }
    else{
        struct node* t = front;
        front = front->next;
        free(t);
    }
}
void print(){
    struct node* temp = front;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    print();
    dequeue();
    print();

    return 0;
}