#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}nodetype;


nodetype* createQueue();
nodetype* reverse(nodetype*);
void display(nodetype*);



int main()
{
        	nodetype *front= NULL,*reverseFront=NULL;
			front=createQueue();
			printf("\n-------displaying original Queue----------\n");
			display(front);
			reverseFront = reverse(front);
			printf("\n-------displaying Reversed Queue----------\n");
			display(reverseFront);	
}


nodetype* createQueue()
{
	nodetype *front=NULL,*rear=NULL,*p = NULL;
	int value,choice=1;
	
	while(choice==1){
	printf("Enter Value for insert : ");
	scanf("%d",&value);
	p = (nodetype*)malloc(sizeof(nodetype));
	p->data = value;
	if(rear == NULL)
		rear =front= p;
	else{
		rear->next = p;
		rear = p;
	}
	rear->next = NULL;
	printf("\nPress 1 if you want to continue : ");
	scanf("%d",&choice);
  }
	
	return front;
	
}


nodetype* reverse(nodetype *front)
{
	nodetype *revFront = NULL,*revRear=NULL,*p=NULL;
	while(front != NULL)
	{
		nodetype *p = (nodetype*)malloc(sizeof(nodetype));
		p->data = front->data;
		if(revRear == NULL){
			revFront = revRear = p;
			p->next=NULL;
		}
		else
		{
			p->next=revFront;
			revFront = p;
		}
	front = front->next;
	}
	return revFront;
}

void display(nodetype *f)
{
	if(f == NULL){
		printf("\nList is Empty");
	}
	
	while(f != NULL)
	{
		printf("\n%d",f->data);
		f = f->next;
	}
	
}
