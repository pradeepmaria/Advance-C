#include <stdio.h>

int my_isalnum(int ch);

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_isalnum(ch);
    
  if(ret == 0)
  {

     printf("The character '%c' is an alnum character.\n",ch);
  }
  else  
  {
     printf("The character '%c' is not an alnum character.\n",ch);
  }
  return 0;
}

int my_isalnum(int ch)
{	
	 switch(ch)
        {
                case 'A' ... 'Z':
		case 'a' ... 'z':
		case '0' ... '9':
			return 0;
                default:
                        return 1;
        }
}

