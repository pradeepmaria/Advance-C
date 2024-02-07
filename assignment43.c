#include <stdio.h>				//includes standard I/O header files
#include<string.h>                                  //includes string header files

void swap(char [], char []);                         //implicit declaration of function swap
void combination(char [],int ,int );                //implicit declaration of function combination
int my_strlen(char []);                            //implicit declaration of function string length

int main()                                                                        

{ 
        char str[100];                        //declaring string
        int ind, n,end;                                                            

        printf("Enter a string: ");						   
        scanf("%100[^\n]",str);
	
	for(int i=0;str[i]!='\0';i++)
	{
	    for(int j=i+1;str[j]!='\0';j++)
	    {
    		if(str[i]==str[j])
    		{
    		    printf("Error: please enter distinct characters.\n");
    		    return 0;
    		}
	    }
	}
       
	n = my_strlen(str);                        //calling string length function in n
       	combination(str,0,n-1);                   //calling combination function   
        	

        return 0;
}
int my_strlen(char str[])                            //define string length function
{
    int i, len=0;                                                                  
    for(i = 0; str[i] != '\0'; i++)                  //loop for counting length of string
    {
    	len += 1;                                                                  
    }
    return len;                                                                   
}
void combination(char str[], int ind, int end)      //defining function
{
    int i;                                                                     

    if(ind == end) 								   
    {
    	printf("%s\n", str);                  //if index vallue is equal to end value, prints string
    }
    else
    	for(i = ind; i <= end; i++)          //loop will run index values of string
    	{
    	    swap(str+ind, str+i);          //calling swap function for swapping index positions
    	    combination(str, ind+1, end); //calling combination function recursively to get combination
    	    swap(str+ind, str+i);        //backtracking
    	}
}
void swap(char *str1, char *str2)      //swap function swaps index of string to get different combination
{
    char temp;                                                        

    temp = *str1;
    *str1 = *str2;
    *str2 = temp; 
}                                       //end of swap function and end of prograim
