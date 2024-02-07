#include<stdio.h>
#include<string.h>
#define swap(t,x,y)		\
{				\
	t z = x;		\
	x = y;			\
	y = z;			\
}				
int main()
{
	int choice;					//declaring variables of datatype
	int x, y;
	char a, b;
	short c, d;
	float e, f;
	double g, h;
	char str1[50], str2[50],*ptr1,*ptr2;
	printf("1.int\n2.char\n3.short\n4.float\n5.double\n6.string\nEnter your choice:");
	scanf("%d", &choice);
	switch(choice)					//switch case to swap
	{
		case 1:					//case to swap integer datatype
			printf("Enter the num1:");
			scanf("%d", &x);
			printf("Enter the num2:");
			scanf("%d", &y);
			swap(int,x,y);
			printf("After swapping:\n num1:%d\nnum2:%d\n", x,y);
			break;
		case 2:					//case to swap character datatype
			printf("Enter the char1:");
			scanf(" %c", &a);
			printf("Enter the char2:");
			scanf(" %c", &b);
			swap(char,a,b);
			printf("After swapping:\n char1:%c\nchar2:%c\n", a,b);
			break;
		case 3:					//case to swap short datatype
			printf("Enter the num1:");
			scanf("%hd", &c);
			printf("Enter the num2:");
			scanf("%hd", &d);
			swap(short,c,d);
			printf("After swapping:\n num1:%hd\nnum2:%hd\n", c,d);
			break;
		case 4:					//case to swap float datatype
			printf("Enter the num1:");
			scanf("%f", &e);
			printf("Enter the num2:");
			scanf("%f", &f);
			swap(float,e,f);
			printf("After swapping:\n num1:%g\nnum2:%g\n", e,f);
			break;
		case 5:					//case to swap double datatype
			printf("Enter the num1:");
			scanf("%lf", &g);
			printf("Enter the num2:");
			scanf("%lf", &h);
			swap(double,g,h);
			printf("After swapping:\nnum1:%g\nnum2:%g\n", g,h);
			break;
		case 6:					//case to swap string
			printf("Enter the string1:");
			scanf("%s", str1);
			printf("Enter the string2:");
			scanf("%s", str2);
			ptr1=str1;
			ptr2=str2;
			swap(char *,ptr1,ptr2);
			printf("After swapping:\nstr1:%s\nstr2:%s\n", ptr1,ptr2);
			break;
	}
}
