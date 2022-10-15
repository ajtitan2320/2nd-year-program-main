#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* head = NULL;
void insertion(int data){
    struct node* temp = (struct node* )malloc(sizeof(struct node));
    struct node *tail;
    if(head==NULL){
        temp->data = data;
        head = temp;
        head->next = head;
    }
    else{
        tail = head;
        while(tail->next!=head){
            tail = tail->next;
        }
        temp->data = data;
        temp->next = head;
        tail->next = temp;
        head = temp;
    }
}
void print(){
    struct node* temp = head;
    do{
        printf("%d ",temp->data);
        temp = temp->next;
    }while(temp!=head);
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