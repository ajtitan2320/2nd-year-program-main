#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head = NULL;
void delete(int pos){
    struct node* temp;
    int c = 0;
    struct node* s = head;
    struct node* s1,*e;
    struct node* s2;
    int si = 1;
    s2=head;
    while(s2->next!=NULL){
        si++;
        e = s2;
        s2 = s2->next;
    }
    if(pos==1){
        temp = head;
        head = head->next;
        temp = NULL;
        free(temp);
    }
    else if(pos==si){
        e->next = NULL;
        temp = s2;
        free(temp);
    }
    else{
        while(c<pos-1){
        c++;
        s1 = s;
        s = s->next;
        }
        s1->next = s->next;
    temp = s;
    free(temp);
    
    
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
    delete(3);
    print();
    return 0;
}