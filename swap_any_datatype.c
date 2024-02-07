#include <stdio.h>
#include <string.h>

void swap(void *a, void *b, size_t size) 
{
    unsigned char *charA = a;
    unsigned char *charB = b;

    for (void i = 0; i < size; i++) 
    {
        unsigned char temp = charA[i];
        charA[i] = charB[i];
        charB[i] = temp;
    }

}     


int main() 
{
    int a = 5, b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(&a, &b, sizeof(int));

    printf("After swap: a = %d, b = %d\n", a, b);

    float x = 3.14, y = 6.28;
    printf("Before swap: x = %f, y = %f\n", x, y);

    swap(&x, &y, sizeof(float));

    printf("After swap: x = %f, y = %f\n", x, y);

    char c1 = 'A', c2 = 'B';
    printf("Before swap: c1 = %c, c2 = %c\n", c1, c2);

    swap(&c1, &c2, sizeof(char));

    printf("After swap: c1 = %c, c2 = %c\n", c1, c2);

    double d1 = 1.234, d2 = 5.678;
    printf("Before swap: d1 = %f, d2 = %f\n", d1, d2);

    swap(&d1, &d2, sizeof(double));

    printf("After swap: d1 = %f, d2 = %f\n", d1, d2);

    return 0;
}


