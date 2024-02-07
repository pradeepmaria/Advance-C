#include<stdio.h>
int main()
{
	int ch;
	int flag=0;
	int charcount=0,linecount=0,wordcount=0;
	while((ch =getchar()) != EOF)
	{
		charcount++;
		if(ch == '\n')
		{
			linecount++;
		}
		if(ch == ' '||ch == '\t'||ch == '\n') 
		{
	    		if(flag==0)
	    		{
				wordcount++;  
				flag=1;
	    		}
		}
		else
		{
	    		flag=0;
		}
    		
	}
	printf("Character count : %d\n",charcount);
	printf("Line count : %d\n",linecount);
	printf("Word count : %d\n",wordcount);

	return 0;
}
