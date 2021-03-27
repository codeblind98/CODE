#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	struct node*next;
	int data;
}nodetype;
void insert(nodetype**,nodetype**);
void delete(nodetype**,nodetype**);
void display(nodetype*);
int main()
{
  nodetype*front=NULL,*rear=NULL;
	
	int ch;
	do
	{
	
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:insert(&front,&rear);
		break;
		case 2:delete(&front,&rear);
		break;
		case 3: display(front);
		break;
		
	}
}while(ch<4);
	return 0;
}
void insert(nodetype**f,nodetype**r)
{
		nodetype*p=NULL;
		int num;
		printf("\nEnter number to be inserted in node");
		scanf("%d",&num);
		p=(nodetype*)malloc(sizeof(nodetype));
		if(p==NULL)
		{
			printf("memory not allocated");
		}
		
		p->data=num;
		if(*f==NULL)
		{
			*f=p;
			*r=p;
		}
		else
		{
		(*r)->next=p;
		*r=p;	
		}
		(*r)->next=*f;
}
void delete(nodetype**f,nodetype**r)
{  nodetype*temp;
	if(*f==NULL)
	
		printf("Queue is empty");
		else
		{
			temp=*f;
			printf("\nDeleted node is %d \n",temp->data );
			if(*f==*r)
			{
				*f=*r=NULL;
			}
			else
			{
				*f=(*f)->next;
				(*r)->next=*f;
			}
			free(temp);
			
		}
	
}
void display(nodetype*f)
{
	nodetype*temp=f;
	if(f==NULL)
	printf("Queue is empty");
	else
	{
	do
	{
		printf("%d   ",temp->data);
		temp=temp->next;
	}
	while(temp!=f);
	
		
	}
}
