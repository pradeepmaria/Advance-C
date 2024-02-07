#include <stdio.h>

int my_isalnum(int ch);

int main()
{
    char ch;
    int ret;

    printf("Enter the character:");
    scanf("%c", &ch);

    ret = my_isalnum(ch);

  if(ret == 1)
  {

     printf("The character '%c' is punctuation character.\n",ch);
  }
  else
  {
     printf("The character '%c' is not punctuation character.\n",ch);
  }
  return 0;
}
int my_isalnum(int ch)
{
         switch(ch)
        {
                case 'A' ... 'F':
                case 'a' ... 'f':
                case '0' ... '9':
                        return 0;
                default:
                        return 1;
        }
}

