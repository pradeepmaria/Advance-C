#include <stdio.h>
#include <unistd.h> // For sleep function

int main()
{
    int j;
    char s = '-';

    for (j = 1; j <= 100; j++)
    {
        printf("Loading [");

        for (int k = 1; k <= j; k++)
        {
            putchar('-');
        }

        for (int k = j + 1; k <= 100; k++)
        {
            putchar(' ');
        }

        printf("] %d%%\r", j);
        fflush(stdout);
        sleep(1);
    }

    printf("\n");
    return 0;
}

