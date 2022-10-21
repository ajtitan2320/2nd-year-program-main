#include<stdio.h>
#include<stdlib.h>
typedef struct nde{
    int data;
    struct nde* next;
}node;
node *head = NULL;
void insert_at_beginning(int data){
    node* temp = (node*)malloc(sizeof(node));
    if(temp==NULL){
        printf("Not Enough Memory");
    }
    else{
        temp->data = data;
        if(head==NULL){
            temp->next = NULL;
            head = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
    }
}
void print(){
    node* temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
int main()
{
    insert_at_beginning(5);
    insert_at_beginning(4);
    insert_at_beginning(3);
    insert_at_beginning(2);
    insert_at_beginning(1);
    print();
    return 0;
}