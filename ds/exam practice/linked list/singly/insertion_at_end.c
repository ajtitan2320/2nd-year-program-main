#include<stdio.h>
#include<stdlib.h>
typedef struct nde{
    int data;
    struct nde* next;
}node;
node *head = NULL;
void insert_at_end(int data){
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
            node* temp1 = head;
            while(temp1->next!=NULL)
            {
                temp1 = temp1->next;
            }
            temp1->next = temp;
            temp->next = NULL;
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
    insert_at_end(5);
    insert_at_end(4);
    insert_at_end(3);
    insert_at_end(2);
    insert_at_end(1);
    print();
    return 0;
}