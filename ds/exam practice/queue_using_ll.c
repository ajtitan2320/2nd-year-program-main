#include<stdio.h>
#include<stdlib.h>
#define e printf("\n")
typedef struct node{
	int data;
	struct node* next;
}node;
node *front = NULL;
node *rear = NULL;
void push(int data){
	node* temp = (node*)malloc(sizeof(node));
	temp->data = data;
	if(front==NULL && rear==NULL){
		front = temp;
		rear = temp;
	}
	else{
		rear->next = temp;
		rear = temp;
	}
}
void pop(){
	if(front==NULL || rear==NULL){
		printf("no element\n");
	}
	else{
		front = front->next;
	}
}
void print(){
	node* temp = front;
	while(temp!=rear->next){
		printf("%u %d %u\n",temp,temp->data,temp->next);
		temp = temp->next;
	}
}
int main(){
	int c;
	
	while(1){
		printf("1 - push\n2 - pop\n3 - push\n4 - stop\n");
	printf("enter the choice : ");
	scanf("%d",&c);
		if(c==1){
			int a;
			printf("enter the element you want to insert = ");
			scanf("%d",&a);
			push(a);
		}
		else if(c==2){
			pop();
		}
		else if(c==3){
			print();
			e;
		}
		else if(c==4){
			break;
		}
		else{
			printf("wrong choice\n");
		}
	}
}
