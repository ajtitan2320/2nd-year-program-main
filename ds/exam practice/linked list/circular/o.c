#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head;
void create()
{
	head=NULL;
	struct node *newnode,*temp;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the data\n");
		scanf("%d",&newnode->data);
		printf("\n");
		newnode->next=NULL;
		newnode->prev=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		}
}
void insertatbeg()
{
	head=NULL;
	struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the data\n");
		scanf("%d",&newnode->data);
		printf("\n");
		newnode->next=NULL;
		newnode->prev=NULL;
		if(head==NULL)
		{
			head=newnode;
		}
		else
		{
			head->prev=newnode;
			newnode->next=head;
			head=newnode;
		}
}
void insertatend()
{
	head=NULL;
	struct node *newnode,*temp;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the data\n");
		scanf("%d",&newnode->data);
		printf("\n");
		newnode->next=NULL;
		newnode->prev=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		}
}
void display()
{
        struct node *temp;
        if(head==NULL)
        {
                printf("\nList is empty:\n");
                return;
        }
        else
        {
                temp=head;
                printf("\nThe List elements are:\n");
                while(temp!=NULL)
                {
                        printf("%d\t",temp->data );
                        temp=temp->next ;
                }
        }
}
int main()
{
	int ch;
	while(1)
   {
  		printf("\n1. Create\n");
		printf("\n2. display\n");
	    printf("\n3. Insert at begining\n");
	    printf("\n4. Insert at the end\n");
	    printf("\n5.Exit\n");
	    printf("\nenter the choice\n");
        scanf("%d",&ch);
        printf("\n");
	switch(ch)
	{
		case 1:
			     create();
			        break;
	    case 2:
	    	     display();
	    	        break;
	    case 3:
	    	     insertatbeg();
	    	        break;
	    case 4:
	    	     insertatend();
	    	  	    break;
	    case 5:
	    	  	 exit(0);
	    	  	    break;
	    default:
		printf("INVALID CHOICE");
	    break;
	}
   }
return 0;
}