#include <stdio.h>                                             //standard input output library function
#include<stdlib.h>

int fragments(int size, float *arr[],int *col, int *out_arr)   //fuction define
{
    int  i, j;                                                  //initializataing  variables
    for (i=0; i<size-1;i++) 	                               //checking mean and sorting with mean values
    {
    	for (j=0; j<size-1-i; j++)
    	{
    	    if ((arr[out_arr[j]][col[out_arr[j]]]) > (arr[out_arr[j+1]][col[out_arr[j+1]]]))
    	    {
        		out_arr[j] = out_arr[j] +  out_arr[j+1] - (out_arr[j+1] = out_arr[j]);
    	    }
    	}
    }
}
int main()                                                      //main function
{
    int size,i,j;                                               //initializataing  variables
    float sum;
    printf("Enter no.of rows : ");
    scanf("%d",&size);
    float *arr[size];                                           //initializataing  arrays
    int col[size];
    int out_arr[size];
    for(i=0; i<size; i++)	                                //allocating memory
    {
    	printf("Enter no of columns in row[%d]: ",i);
    	scanf("%d", &col[i]);
    	getchar();
    	arr[i]=malloc(1+col[i]*sizeof(float));                  //to allocated memory in heap segment by using malloc
    	out_arr[i]=i;		
    }
    for (i=0; i<size; i++)	                                //read array elements
    {
    	printf("Enter %d values for row[%d] : ",col[i],i);
    	for (j=0;j<col[i];j++)
    	{
    	    scanf("%f",&arr[i][j]);                             //scanf statement for user input array elements
    	}
    }

    printf("Before sorting output is: \n");
    for(i=0; i<size;i++)	                                //printing array elements before sorting
    {
    	sum=0;
    	for(j=0;j<col[i];j++)
    	{
    	    printf("%f ",arr[i][j]);
    	    sum=sum+arr[i][j];                                  //calculate sum
    	}
    	printf("%f\n", arr[i][j]=sum/j);                        //calculate aravage of rows and print 
    }

    fragments(size,arr,col,out_arr);                            //fuction call

    printf("After sorting output is: \n");	                //printing after sorting
    for(i=0;i<size;i++)
    {
    	for(j=0; j<col[(out_arr[i])]+1; j++)
    	{
    	    printf("%f ", arr[(out_arr[i])][j]);
    	}
    	printf("\n");
    }
    return 0;                                                   //return 0 in the main function means that the program executed successfully
}
