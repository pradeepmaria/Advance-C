#include <stdio.h>
int main()
{
printf("Program: \"%s\" \n", __FILE__ );
printf("was compiled on %s at %s. \n", __DATE__ , __TIME__ );
printf("This print is from Function: \"%s\"\n", __func__ );
printf("at line %d\n", __LINE__ );
return 0;
}
