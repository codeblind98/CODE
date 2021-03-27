#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node{
	int s_roll;
	char s_name;
	char s_grade;
	struct node *next;
}nodetype;

nodetype* insert(nodetype*);
nodetype* del(nodetype*);
void display(nodetype*);


int main()
{
	nodetype *front= NULL,*rear = NULL;
	int choice = 0;
	while(choice < 4 )
	{
	
	printf("\n Press 1 for Insert : \n Press 2 for DELETE : \n Press 3 for display : \n Else for Exit : -> ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			rear = insert(rear);
			if(front == NULL)
				front = rear;
			break;
		case 2:
			front = del(front);
			if(front == NULL)
				rear = front;		
			break;
		case 3:
			display(front);
			break;
	};
	
	}
	
	
}

nodetype* insert(nodetype *r)
{

	nodetype *p = NULL;
	int roll;
	char s_name;
	char s_grade;
	printf("Enter Roll NO of Student : ");
	scanf("%d",&roll);
	fflush(stdin);
	printf("Enter Name of Student(Single Character) : ");
	scanf("%c",&s_name);
	fflush(stdin);
	printf("Enter Grade of Student : ");
	scanf("%c",&s_grade);
	
	p = (nodetype*)malloc(sizeof(nodetype));
	p->s_roll = roll;
	p->s_name = s_name;
	p->s_grade = s_grade;
	if(r == NULL)
		r = p;
	else{
		r->next = p;
		r = p;
	}
	r->next = NULL;
	return r;
}

nodetype* del(nodetype *tp)
{
	nodetype *pvs=NULL,*temp = tp;
	int del_value,flag = 0;
	printf("Enter Roll NO of  Student to delete Data : ");
	scanf("%d",&del_value);
	if(tp->s_roll == del_value)
	{
		temp = tp;
		tp = tp->next;
		free(temp);
		printf(" Roll NO : %d data deleted \n",del_value);
		return tp;
	}
	else{
		while(temp != NULL)
		{
			if(temp->s_roll == del_value)
			{
				flag++;
				pvs->next = temp->next;
				free(temp);
				break;
			}
			pvs = temp;
			temp = temp->next;
		}
}
	flag == 0 ? printf("Roll NO : %d data is not found \n",del_value) : printf(" Roll NO : %d data deleted \n",del_value);
	
	return tp;
}



void display(nodetype *f)
{
	if(f == NULL){
		printf("\nList is Empty");
	}
	
	while(f != NULL)
	{
		printf(" \n Roll No : %d",f->s_roll);
		printf(" \n Name    : %c",f->s_name);
		printf(" \n Grade   : %c\n",f->s_grade);
		f = f->next;
	}
	
}
