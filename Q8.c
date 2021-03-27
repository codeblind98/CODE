#include<stdio.h>
#include<stdlib.h>

typedef struct node{
   int data;
   struct node *next;
 }nodetype;

nodetype* createLinkedList();
nodetype* splitIntoPositveAndNegative(nodetype*);
void display(nodetype*);

int main(){
    nodetype *front=NULL,*pos_front=NULL,*neg_front=NULL;
       front=createLinkedList();
       printf("\n----------------The original linked list---------------\n");
       display(front);
       if(front->data>=0){
       	   pos_front=front;
       	   neg_front=splitIntoPositveAndNegative(front);
	   }
	   else{
           neg_front=front;
		   pos_front=splitIntoPositveAndNegative(front);
       }
         
		printf("\n----------------The POSITIVE linked list---------------\n");
        display(pos_front);
	   
	    printf("\n----------------The NEGATIVE linked list---------------\n");
        display(neg_front);  
return 0;
}

nodetype* createLinkedList(){
      nodetype *p=NULL ,*front=NULL,*rear=NULL;
      int num,choice=1;
      
      while(choice==1){
          printf("\nEnter the value to be inserted :");
          scanf("%d",&num);
    
          p=(nodetype*)malloc(sizeof(nodetype));
          if(p!=NULL)
             p->data=num;
          else
             printf("\nmemory not allocated");
          if(rear==NULL)
             rear=front=p;
          else{
             rear->next=p;
             rear=p;
           }
        rear->next=NULL;
        printf("\nPress 1 to continue adding nodes else press other key : ");
        scanf("%d",&choice);
      }
  return front;      
 }

nodetype* splitIntoPositveAndNegative(nodetype *front){
      nodetype *pos_front=NULL,*pos_rear=NULL,*neg_front=NULL, *neg_rear=NULL;
	  while(front!=NULL)
	    {
	         if(front->data>=0)
			   {
			         if(pos_front==NULL)
				         pos_front=front;
				     else
				      	pos_rear->next=front;
				      	
				      pos_rear=front;
					  front=front->next;
				      pos_rear->next=NULL;
		       }  
			  else
			   {
                     if(neg_front==NULL)
				         neg_front=front;
				     else
				      	neg_rear->next=front;
				      	
				     neg_rear=front;
					 front=front->next;
				     neg_rear->next=NULL;			     	
			   }	
	    }
	  if(pos_front->data>=0)
	      return neg_front;
	  else      
	      return pos_front;
 }


void display(nodetype *front){
	 if(front!=NULL){
           while(front!=NULL){
              printf("%d\t",front->data);
              front=front->next;
            }
	}
	else
	printf("\nqueue is empty");
 }
