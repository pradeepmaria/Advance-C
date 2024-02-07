#include<stdio.h>
#include<stdlib.h>
void sort_names(char *name[32],int);				//declaring function
int my_strcmp(const char *,const char *);
int my_strcpy(char *,char *);
int main()
{
    int size=0;
    printf("Enter the size:");
    scanf("%d",&size);
    char *name[32];
    printf("Enter the %d names of length max 32 characters in each\n",size);

    for(int i=0;i<size;i++)                         //loop to read elements from user
    {
	    name[i]=malloc(32);
	    scanf("%s",name[i]);
    }

    sort_names(name,size);					//calling function
    printf("\nThe sorted names are:\n");
    for(int i=0;i<size;i++)
    {
	    printf("%s\n",*(name + i));				//printing sorted names
    }
}
void sort_names(char *name[32],int size)			//defining a function
{
    char temp[32];
    int i,j,var=0;
    for(int i=0;i<size;i++)					//loop to compare each name
    {
	    for(int j=i+1;j<size;j++)				//loop to compare each names
	    {
	        var=my_strcmp((const char *)name[i],(const char *)name[j]);	//calling function to compare each names
	        if(var==1)
	        {
		        my_strcpy(temp,name[i]);			//calling function to swap names
		        my_strcpy(name[i],name[j]);
		        my_strcpy(name[j],temp);
	        }
	        else
		        continue;
	    }
    }
}
int my_strcmp(const char *str1,const char *str2)		//defining function
{
    int i=0,flag=0;
    for(i=0;*str1!='\0'||*str2!='\0';i++)                     //loop to comparre each string
    {
	    if(*str1 > *str2)
	    {
	        return 1;
	    }
	    else if(*str1 < *str2)
	    {
	        return -1;
	    }
	    else if(*str1 == *str2)
	    {
	        *str1++;
	        *str2++;
	    }
    }

}
int my_strcpy(char *dest,char *src)				//defining function
{
    if(dest==NULL)
    {
	    return 0;
    }
    char *ptr=dest;
    while(*src != '\0')						//loop to copy name from source to destination
    {
	    *dest=*src;
	    dest++;
	    src++;
    }
    *dest='\0';
}
