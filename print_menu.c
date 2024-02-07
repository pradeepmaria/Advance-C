#include<stdio.h>

void print_menu(char **menu,int menu_size)
{
	printf("Menu options:\n");
	for(int i=0;i<menu_size;i++)
	{
		printf("%d.) %s\n",i+1,menu[i]);
	}

}
int main()
{
	char *arr[] = {"File","Edit","View","Insert","Help"};
	int menu_size = 5;
	
	print_menu(arr,menu_size);
	
	int option;
	printf("Select your options:");
	scanf("%d",&option);

	if (option >= 1 && option <= menu_size) 
	{
        	printf("You have selected %s Menu\n", arr[option - 1]);
    	}	 
	else 
	{
        	printf("Invalid option\n");
    	}


}

        
                
                
        
