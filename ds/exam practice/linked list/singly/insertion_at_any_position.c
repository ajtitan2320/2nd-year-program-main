#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head = NULL;
void AnyPosition(int data,int pos){
    struct node* temp = (struct node* )malloc(sizeof(struct node));
    if(head==NULL){
        if(pos==1){
            temp->data = data;
            temp->next = NULL;
            head=temp;
        }
    }
    else{
        int ct = 0;
        struct node* s = head;
        while(s!=NULL){
            ct++;
            s = s->next;
        }
        temp->data = data;
        if(pos==1){
            temp->next = head;
            head=temp;
        }
        else if(pos==ct+1){
            struct node* temp1 = head;
            while(temp1->next!=NULL){
                temp1 = temp1->next;
            }
            temp1->next = temp;
            temp->next = NULL;
        }
        else{
            struct node* s1 = head;
            int c=1;
            while(c<pos-1){
                c++;
                s1 = s1->next;
            }
            temp->next = s1->next;
            s1->next = temp;
        }
    }
}
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
    insertion(1);
    insertion(2);
    insertion(3);
    insertion(4);
    insertion(5);
    AnyPosition(6,4);
    print();
    return 0;
}