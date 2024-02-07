#include <stdio.h>
#include<string.h>
void itoa(int num, char str[]);                  //decalre function
int main()
{
    int num,ret;
    char str[10];

    printf("Enter the number:");
    ret =  scanf("%d", &num);				//reading a value

    if(ret)
    {
	    itoa(num, str);                             //calling function
	    printf("Integer to string is %s\n", str);
    }
    else
    {
	    printf("Integer to string is %d\n",ret);
    }
    return 0;
}
void  itoa(int num, char str[])
{
    int flag = 0,i=0,mod=0,div=0,count=0,j=0,k=0;

    if(num < 0)                             //if num lessthan zero
    {
	    flag = 1;                           //falg value one
	    num = -num;                        //-num assige in num
    }

    while(num!= 0)                         //while loop till num is equal zero
    {
	    mod = num % 10;                    
	    num = num / 10;
	    str[i] = mod + 48;                //str[i] adding 48 ascii value
	    i++;
    }

    if(flag == 1)                         //if checking for flaf is equal one
    {
    	str[i] = '-';
	    str[i+1] = '\0';
    }
    else
    {
	    str[i]= '\0';
    }

    while(str[k] != '\0')                //while loop finding count
    {
	    count++;
	    k++;
    }

    for(int i=0;i<count/2;i++)       // for loop for swaping elements
    {
	    char temp;
	    temp = str[count-i-1];
	    str[count-i-1] = str[i];
	    str[i]=temp;
    }

}

