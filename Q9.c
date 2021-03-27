#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node*next;
}nodetype;
nodetype*create();
void concat(nodetype*,nodetype*);
int main()
{  nodetype*head1=NULL,*head2=NULL;
   printf("Enter first linked list\n");
   head1=create();
   printf("Enter second linked list\n");
   head2=create();
   printf("Concatinated string is");
   concat(head1,head2);
   return 0;
}
nodetype*create()
{
	nodetype*p=NULL,*head=NULL,*tail=NULL;
	int num,ch;
	do
	{
		printf("Enter number to be inserted in node");
		scanf("%d",&num);
		p=(nodetype*)malloc(sizeof(malloc));
		p->data=num;
		if(head==NULL)
		{
			head=tail=p;
		}
		else
		{
			tail->next=p;
			tail=p;
		}
		tail->next=NULL;
		printf("\nDo you want to continue adding nodes    PRESS 1 ELSE PRESS ANY NUMBER\n");
		scanf("%d",&ch);
		
	}while(ch==1);
	return head;
}
void concat(nodetype*head1,nodetype*head2)
{ 
	nodetype*temp1=head1;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
	}
	temp1->next=head2;
	printf("The data in nodes is\n");
	while(head1!=NULL)
	{    printf("%d\n",head1->data);
		head1=head1->next;
	}
	
}


