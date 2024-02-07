#include<stdio.h>
#include<stdlib.h>
int matrix_mul(int **, int, int, int **, int, int, int **);	//declaring a function
int main()
{
    int row1,col1,a,b;
    int **matrix_a,**matrix_b;
    printf("Enter number of rows :");
    scanf("%d",&row1);
    printf("Enter number of columns :");
    scanf("%d",&col1);
    printf("Enter values for %d * %d matrix :\n",row1,col1);

    matrix_a = malloc(row1 * sizeof(int *));			//declaring the size of row for matrix a
    for(int i=0;i<row1;i++)					//declaring the size of column for matrix a
	    matrix_a[i] = malloc(col1 * sizeof(int));

    for(int i=0;i<row1;i++)
	    for(int j=0;j<col1;j++)
	        scanf("%d",&matrix_a[i][j]);			//reading elements from user

    int row2,col2;
    printf("Enter number of rows :");
    scanf("%d",&row2);
    printf("Enter number of columns :");
    scanf("%d",&col2);
    if(col1==row2)
    {
        printf("Enter values for %d * %d matrix  :\n",row2,col2);

        matrix_b = malloc(row2 * sizeof(int ));			//declaring the size of row for matrix b
        for(int i=0;i<row2;i++)					//declaring the size of column for matrix b
	        matrix_b[i] = malloc(col2 * sizeof(int));


        for(int i=0;i<row2;i++)
	        for(int j=0;j<col2;j++)
	            scanf("%d",&matrix_b[i][j]);


        int **multi;

        multi = malloc(row1 * sizeof(int ));			//declaring the size of row for result matrix
        for(int i=0;i<row1;i++)					//declaring the size of column for result matrix
	        multi[i] = malloc(col2 * sizeof(int));


        matrix_mul(matrix_a,row1,col1,matrix_b,row2,col2,multi);	//calling the function
    }
    else
    {
        printf("Matrix multiplication is not possible");
    }
    return 0;
}
int matrix_mul(int **matrix_a,int row1,int col1, int **matrix_b,int row2,int col2, int **multi) //defining the function
{
    int i,j,k;

    for(i=0;i<row1;i++)							//loop for row
    {
	    for(j=0;j<col2;j++)						//loop for column
	    {
	        multi[i][j]=0;						//initializing result matrix as 0
	        for(k=0;k<row2;k++)						//loop to multiplication of 2 matrixes
	        {
		        multi[i][j] += matrix_a[i][k] * matrix_b[k][j];
	        }
	    }
    }
    printf("Product of two matrix :\n");
    for(i=0;i<row1;i++)							//loop to print the final multiplied matrix
    {
	    for(j=0;j<col2;j++)
	    {
	        printf("%-4d",multi[i][j]);
	    }
	    printf("\n");
    }
}
