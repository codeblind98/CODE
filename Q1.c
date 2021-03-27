#include<stdio.h>

void sort(int [],int);
void thirdNonRepeating(int [],int);         
int main()
 {
 	
 	int i,j,len;
 	printf("\nEnter the range of array : ");
 	scanf("%d",&len);
 	int a[len];
 	printf("\nEnter the Array Elements : ");
 	for(i=0;i<len;i++)
 	  scanf("%d",&a[i]);
 	
	thirdNonRepeating(a,len);
	
	return 0;
 }
 
 void thirdNonRepeating(int a[],int len)
  {
  	int i,j,temp,flag=1;
  	int non_repeat_count=0;
  	for(i=0;i<len;i++)
  	 {
  	 	temp=a[i];
  	    flag=0;
		  for(j=0;j<len;j++)
		   {
		        if(a[i]==a[j]) 
				  flag++;
		   }	
		if(flag==1)
		  non_repeat_count++;
		  
		if(non_repeat_count==3)
		  break;
	}
    if(non_repeat_count==3)
	 printf("\nThe third non repeating element is %d ",a[i]);
    else 
     printf("\nThird non repeating element does not exist");
  }
 

