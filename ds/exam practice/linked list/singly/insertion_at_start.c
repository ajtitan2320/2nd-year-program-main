#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* head = NULL;
void insertion(int data){
    struct node* temp = (struct node* )malloc(sizeof(struct node));
    // if(head==NULL){
    //     temp->data = data;
    //     temp->next = NULL;
    //     head = temp;
    // }
    // else{
        temp->data = data;
        temp->next = head;
        head = temp;
    //}
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