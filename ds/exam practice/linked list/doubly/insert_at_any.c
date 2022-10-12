#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node* prev;
};
struct node* head = NULL;
void any(int data,int pos){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    int si=0;
    struct node *s1,*s2;
    s1 = head;
    temp->data = data;
    while(s1!=NULL){
        si++;
        s2= s1;
        s1=s1->next;
    }
    if(pos==1){
        temp->next=head;
        head->prev = temp;
        temp->prev = NULL;
        head = temp;
    }
    else if(pos==si+1){
        s2->next = temp;
        temp->prev = s2;
        temp->next = NULL;
    }
    else{
        int c=0;
        s1=head;
        while(c<pos-1){
            c++;
            s2 = s1;
            s1=s1->next;
        }
        temp->next = s1;
        s2->next = temp;
        temp->prev = s2;
        s1->prev = temp;
    }
}
void insertion(int data){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    if(head == NULL){
        temp->prev = NULL;
        temp->next = NULL;
        head = temp;
    }
    else{
        struct node* tail = head;
        while(tail->next!=NULL){
            tail = tail->next;
        }
        temp->prev = tail;
        temp->next = NULL;
        tail->next = temp;
        tail = temp;
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
    any(8,5);
    print();
    return 0;
}