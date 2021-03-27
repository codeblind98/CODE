#include<stdio.h>

void checkArray(int [],int);


int main()
{
	int i,len;
	
	printf("\nEnter the range of array  : ");
	scanf("%d",&len);
	
	int arr[len];
	
	printf("\nEnter elements in the array : ");
	for(i=0;i<len;i++)
	  scanf("%d",&arr[i]);
	
	checkArray(arr,len);

return 0;
}

void checkArray(int a[],int len)
{
	int i,difference,flag=0;
	difference=a[1]-a[0];
	
	for(i=0;i<len-1;i++)
	 {
	 	if((a[i+1]-a[i])==difference)
	 	    flag=0;
	 	else
	 	    flag=1;
	 }
	if(flag==1)
	    printf("\nSequence of the elements in the array are not in AP");
	else
	    printf("\nSequence of the elements in the array are in AP"); 
}

