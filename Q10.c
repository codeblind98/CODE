#include<stdio.h>
#include<stdlib.h>

typedef struct node{
   int data;
   struct node *next;
 }nodetype;

nodetype* createLinkedList();
void splitIntoOddAndEven(nodetype*);
void display(nodetype*);

int main(){
    nodetype *front=NULL;
       front=createLinkedList();
       printf("\n----------------The original linked list---------------\n");
       display(front);
       splitIntoOddAndEven(front);
        
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

void splitIntoOddAndEven(nodetype *front){
      nodetype *odd_front=NULL,*odd_rear=NULL,*even_front=NULL, *even_rear=NULL,*p=NULL;
	  while(front!=NULL)
	    {
	    	 p=(nodetype*)malloc(sizeof(nodetype));
	    	 p->data=front->data;
	         if((p->data%2)==0)
			   {
			         if(even_front==NULL)
				         even_front=p;
				         
				     else
				      	even_rear->next=p;
				      	
				      even_rear=p;
					  front=front->next;
				      even_rear->next=NULL;
		       }  
			  else
			   {
                     
			         if(odd_front==NULL)
				         odd_front=p;
				         
				     else
				      	odd_rear->next=p;
				      	
				      odd_rear=p;
					  front=front->next;
				      odd_rear->next=NULL;			     	
			   }	
	    }
	    printf("\n----------------The ODD linked list---------------\n");
        display(odd_front);
	   
	    printf("\n----------------The EVEN linked list---------------\n");
        display(even_front);
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
