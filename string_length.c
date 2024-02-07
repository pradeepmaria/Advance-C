#include <stdio.h>

int print(const char *str)
{

        int i=0;

        while(str[i] != '\0' && str[i] != '\n')
        {
                  i++;
        }

        return i;
}
int main()
{
        int ret;
        char str[20];
        fgets(str,20,stdin);



         ret = print(str);
         printf("length of the string is = %d\n",ret);

 return 0;
}





