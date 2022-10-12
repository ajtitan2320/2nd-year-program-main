#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head = NULL;
void AnyPosition(int data,int pos){
    struct node* temp = (struct node* )malloc(sizeof(struct node));
    int c = 0;
    struct node* s = head;
    struct node* s1;
    struct node* s2;
    int si = 1;
    s2=head;
    while(s2->next!=NULL){
        si++;
        s2 = s2->next;
    }
    if(pos==1){
        temp->data = data;
        temp->next = head;
        head = temp;
    }
    else if(pos==si){
        temp->data = data;
        s2->next = temp;
        temp->next = NULL;
    }
    else{
        while(c<pos-1){
        c++;
        s1 = s;
        s = s->next;
    }
    temp->data = data;
    temp->next = s;
    s1->next = temp;
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