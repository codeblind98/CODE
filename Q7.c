#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node*next;
}nodetype;
int main()
{
	nodetype*p=NULL,*head=NULL,*tail=NULL;
	int ch,num;
	do
	{
	printf("Enter value to be inserted in node");
	scanf("%d",&num);
	p=(nodetype*)malloc(sizeof(nodetype));
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
printf("Press one  (1) to continue  adding node");
scanf("%d",&ch);
}while(ch==1);

printf("NODE BEFORE DELETION IS");
nodetype*temp1=NULL;
temp1=head;
while(temp1!=NULL)
{
	printf("%d    ",temp1->data);
	temp1=temp1->next;
}
nodetype*temp2=NULL;
temp2=head;
temp2=temp2->next;
printf("Node after deletion of first node");
while(temp2!=NULL)
{
	printf("%d    ",temp2->data);
	temp2=temp2->next;
}

return 0;
}
