#include<stdio.h>
#include<conio.h>

int calc(int row,int col){
   if(row>=0 && (col==0||col==row))
       return 1;
	else
	   return calc(row-1,col)+calc(row-1,col-1);
}
int main(){
   int rows=7,r,c,spaces;
   for(r=0;r<=rows;r++)
     {
	    // printf("Row #%d.....",r);
		 for(spaces=rows-r;spaces>0;spaces--)
		    printf(" ");
		 for(c=0;c<=r;c++)
		    printf(" %d ",calc(r,c));
	printf("\n");
    }
	return 0; 
}
