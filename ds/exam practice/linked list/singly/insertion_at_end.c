#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* head;

void insertion(int data){
    struct node* temp = (struct node* )malloc(sizeof(struct node));
    struct node* tail;
    temp->data = data;
    if(head==NULL){
        temp->next = NULL;
        head = temp;
    }
    else{
        tail = head;
        while(tail->next!=NULL){
            tail = tail->next;
        }
        tail->next = temp;
        temp->next = NULL;
    }
}
void print(){
    struct node* temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
int main()
{
    insertion(5);
    insertion(4);
    insertion(3);
    insertion(2);
    insertion(1);
    print();
    return 0;
}