#include<stdio.h>
#include<stdlib.h>
void magic_square(int **magic, int size);	//function declaration

int main()
{
    int i,j,k,p,q,mid,size; 	//initializing variables
    printf("Enter a number: ");
    scanf("%d",&size);		//read size
    int **magic; 	
    magic = calloc(size, sizeof(int*));	//allocating matrix elements with zero
    for(i=0;i<size;i++)
    {
	    magic[i] = calloc(size, sizeof(int));
    }
    if(size %2 == 0)	//if entered number is even
    {
	    printf("Error : Please enter only positive odd numbers\n");
    }
    else		//if entered number is odd
    {
    	magic_square(magic,size);	//function call
        for(i=0;i<size;i++)		//to print the square
	    {
	        for(j=0;j<size;j++)
	        {
		        printf("%d\t",magic[i][j]);
	        }
	        printf("\n");
	    }
    }
    return 0;
}
void magic_square(int **magic, int size) 	//function definition
{
    int k=size/2;				//starting point of square
    int i, q, p, j=0;				//initializing variables

    for(i=1; i<=size*size; i++)			//loop to calculate magic square
    {
    	magic[j][k]=i;				
    	p=j--;					//one row back
    	q=k++;					//one column forward
    	if(j<0)					//if there is no next row
    	{
	        j=size-1;				//go to last row
	    }
	    if(k>size-1)				//if there is no next column
	    {
	        k=0;				//go to first column
	    }
	    if(magic[j][k] !=0 )			//if block filled with non zero value 
    	{
	        k=q;				//go back to  where its started 
	        j=p+1;				//increment row by 1
	    }
    }
}
