#include <stdio.h>

int main() 
{
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Input elements into the 2D array
    printf("Enter the elements of the %d x %d array:\n", rows, cols);
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
	{
            scanf("%d", &arr[i][j]);
        }
    }

    // Initialize min and max with the first element
    int min = arr[0][0];
    int max = arr[0][0];

    // Find the minimum and maximum values
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
	{
            if (arr[i][j] < min) 
	    {
                min = arr[i][j];
            }
            if (arr[i][j] > max) 
	    {
                max = arr[i][j];
            }
        }
    }

    printf("Minimum value in the array: %d\n", min);
    printf("Maximum value in the array: %d\n", max);

    return 0;
}

