#include<stdio.h>
#define SIZEOF(x) (char*)(x+1)-(char*)x			//macro definition to find sizeof(data_types
int main()
{
	char *a;
	int *b;
	short int *c;
	long int *d;
	float *e;
	double *f;
	long double *h;
	unsigned int *i;
	unsigned char *j;
	long long int *k;
	printf("size of char:%ld bytes\n", SIZEOF(a));		//printing sizeof char datatype
	printf("size of int:%ld bytes\n", SIZEOF(b));		//printing sizeof integer datatype
	printf("size of short int:%ld bytes\n", SIZEOF(c));	//printing sizeof short int datatype
	printf("size of long int:%ld bytes\n", SIZEOF(d));	//printing sizeof long int datatype
	printf("size of float:%ld bytes\n", SIZEOF(e));		//printing sizeof float datatype
	printf("size of double:%ld bytes\n", SIZEOF(f));	//printing sizeof double datatype
	printf("size of long double:%ld bytes\n", SIZEOF(h));	//printing sizeof long double datatype
	printf("size of unsigned int:%ld bytes\n", SIZEOF(i));	//printing sizeof unsigned int datatype
	printf("size of unsigned char:%ld bytes\n", SIZEOF(j));	//printing sizeof unsigned char datatype
	printf("size of long long int:%ld bytes\n", SIZEOF(k));	//printing sizeof long long int datatype
}

