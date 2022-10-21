#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head = NULL;
void delete(int pos){
    if(head==NULL){
        return ;
    }
    else{
        int ct = 0;
        struct node* s = head;
        while(s!=NULL){
            ct++;
            s = s->next;
        }
        if(pos==1){
            struct node* temp = head;
            head = head->next;
            free(temp);
        }
        else if(pos==ct){
            struct node* temp = head;
            struct node* temp1;
            while(temp->next!=NULL){
                temp1 = temp;
                temp = temp->next;
            }
            free(temp);
            temp1->next = NULL;
        }
        else{
            int c=0;
            struct node* temp = head;
            struct node* temp1;
            while(c<pos-1){
                c++;
                temp1 = temp;
                temp = temp->next;
            }
            temp1->next = temp->next;
            free(temp);
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
    print();
    printf("\n");
    delete(1);
    print();
    return 0;
}