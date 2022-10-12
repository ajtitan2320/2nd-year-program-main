#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node* prev;
};
struct node* head = NULL;
void insertion(int data){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    if(head == NULL){
        temp->prev = NULL;
        temp->next = NULL;
        head = temp;
    }
    else{
        temp->prev = NULL;
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void print(){
    struct node* t = head;
    while(t!=NULL){
        printf("%d ",t->data);
        t = t->next;
    }
}
int main()
{
    insertion(1);
    insertion(2);
    insertion(3);
    insertion(4);
    insertion(5);
    print();
    return 0;
}