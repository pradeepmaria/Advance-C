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

     printf("The character '%c' is lowercase alphabet.\n",ch);
  }
  else
  {
     printf("The character '%c' is not a lowercase alphabet.\n",ch);
  }
  return 0;
}
int my_isalnum(int ch)
{
         switch(ch)
        {
                case 'a' ... 'z':
                        return 0;
                default:
                        return 1;
        }
}

