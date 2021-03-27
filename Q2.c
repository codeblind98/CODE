#include<stdio.h>

int* fillArray(int [],int);
int* mergeArray(int [],int *,int *,int , int);
void display(int [],int);

int main()
{
	int arr1_len,arr2_len;
	
	printf("\nEnter the range of array 1 : ");
	scanf("%d",&arr1_len);
	
	printf("\nEnter the range of array 2 : ");
	scanf("%d",&arr2_len);
	
	int arr1[arr1_len];
	int arr2[arr2_len];
	int finalArray[arr1_len+arr2_len];
	
	int *array1;
	int *array2;
	int *finalArrayAddress;
	
	array1 = fillArray(arr1,arr1_len);
	array2 = fillArray(arr2,arr2_len);
	finalArrayAddress=mergeArray(finalArray,array1,array2,arr1_len,arr2_len);
	display(finalArrayAddress,arr1_len+arr2_len);
return 0;
}

int* fillArray(int arr[],int len)
{
	int i;
	printf("\nEnter elements in ascending order : ");
	for(i=0;i<len;i++)
	  scanf("%d",&arr[i]);
	
	return arr;
}

void display(int arr[],int len)
{
	int i;
	for(i=0;i<len;i++)
	  printf("%d\t",arr[i]);
}

int* mergeArray(int finalArray[],int arr1[],int arr2[],int arr1_len,int arr2_len)
{
	int i=0,j=0,k=0;
	while((i<arr1_len)&&(j<arr2_len))
	 {
	 	if(arr1[i]<arr2[j])
	 	 {
	 	 	finalArray[k]=arr1[i];
	 	 	i++;
	 	 	k++;
		  }
	    else
	 	 {
	 	 	finalArray[k]=arr2[j];
	 	 	j++;
	 	 	k++;
		  }
	 }
	 
	 if(i==arr1_len)
	  {
	  	while(j<arr2_len)
	 	 {
	 	 	finalArray[k]=arr2[j];
	 	 	j++;
	 	 	k++;
		  }
	  }
	else{
	
	  	while(i<arr1_len)
	 	 {
	 	 	finalArray[k]=arr1[i];
	 	 	i++;
	 	 	k++;	  
	   	  }
	   }
 return finalArray;
}
