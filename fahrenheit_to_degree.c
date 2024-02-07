#include<stdio.h>
float fahr_to_degree(float f);

int main()
{
	float f,celsius;
	scanf("%f",&f);
	celsius = fahr_to_degree(f);
	printf("fahrenheit to degree is %g\n",celsius);
	return 0;
}
float fahr_to_degree(float f)
{
	float c;
	c = (5/9.0) * (f - 32);
	return c;
}

