#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	char age[5];
	char id[20];
	char mobile[11];

	printf("enter your name: ");
	fgets(name,20,stdin);

	printf("enter your age: ");
	fgets(age,5,stdin);

	printf("enter your id: ");
	fgets(id,20,stdin);

	printf("enter your mobile number: ");
	fgets(mobile,11,stdin);

	printf("UserInformation\n");
	printf("Name: %s",name);
	printf("Age : %s",age);
	printf("ID  : %s",id);
	if(strlen(mobile) == 10)
	{
		printf("Mobile number : %s\n",mobile);
	}
	else
	{
		printf("Invalid mobile number\n");
	}
	 return 0;
}
