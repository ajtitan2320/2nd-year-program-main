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
void rem(){
    node* p2 = NULL;
    node* p1 = head;
    while(p1!=NULL && p1->next!=NULL){
        p2=p1;
        while(p2->next!=NULL){
            if(p1->data==p2->next->data){
                node* temp = p1->next;
                p1->next = p2->next->next;
                free(temp);
            }
            else{
                p2 = p2->next;
            }
        }
        p1 = p1->next;
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
    insert_at_beginning(4);
    insert_at_beginning(4);
    insert_at_beginning(4);
    print();
    printf("\n");
    rem();
    print();
    return 0;
}