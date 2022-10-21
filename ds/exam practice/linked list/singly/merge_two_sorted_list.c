#include<stdio.h>
#include<stdlib.h>
typedef struct nde{
    int data;
    struct nde* next;
}node;
node *head1 = NULL;
node *head2 = NULL;

void insert_at_beginning1(int data){
    node* temp = (node*)malloc(sizeof(node));
    if(temp==NULL){
        printf("Not Enough Memory");
    }
    else{
        temp->data = data;
        if(head1==NULL){
            temp->next = NULL;
            head1 = temp;
        }
        else{
            temp->next = head1;
            head1 = temp;
        }
    }
}
void insert_at_beginning2(int data){
    node* temp = (node*)malloc(sizeof(node));
    if(temp==NULL){
        printf("Not Enough Memory");
    }
    else{
        temp->data = data;
        if(head2==NULL){
            temp->next = NULL;
            head2 = temp;
        }
        else{
            temp->next = head2;
            head2 = temp;
        }
    }
}
node* merge(){
    node h;
    h.next = NULL;
    node *head3 = &h;
    while(head1!=NULL && head2!=NULL){
        if(head1->data <= head2->data){
                head3->next = head1;
                head1 = head1->next;
                head3 = head1;
            }
            else{
                head3->next = head2;
                head2 = head2->next;
                head3 = head2;
            }
    }
    while(head1!=NULL){
            head3->next = head1;
                head3 = head1;
                head1 = head1->next;
    }
    while(head2!=NULL){
            head3->next = head2;
                head3 = head2;
                head2 = head2->next;
    }
    return h.next;
}
void print(node *new_node){
    node* temp = new_node;
    while(temp->next!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
int main()
{
    insert_at_beginning1(5);
    insert_at_beginning1(4);
    insert_at_beginning1(3);
    insert_at_beginning1(2);
    insert_at_beginning1(1);
    insert_at_beginning2(10);
    insert_at_beginning2(9);
    insert_at_beginning2(8);
    insert_at_beginning2(7);
    insert_at_beginning2(6);
    node *new_node = merge();
    print(new_node);
    return 0;
}