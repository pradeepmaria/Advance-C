#include <stdio.h>

void fun_NRPS(char *s, int c, int n)
{
    int i, a;
    a = (c % 2 == 0) ? c / 2 : (c + 1) / 2;

    printf("Possible NRPS is: ");
    
    for (i = 0; i < n; i++)
    {
        s[c + i] = s[a];
        a++;
        if (i == n - 1)
            s[c + i] = s[0];
    }

    for (i = 0; i < c + n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}

int main()
{
    int c, n, i, j;
    char s[20];

    printf("Enter the number of characters C: ");
    scanf("%d", &c);

    printf("Enter the length of the string N: ");
    scanf("%d", &n);

    printf("Enter %d distinct characters: ", c);
    for (i = 0; i < c; i++)
    {
        scanf(" %c", &s[i]);
    }

    for (i = 0; i < c; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");

    for (i = 0; i < c; i++)
    {
        for (j = i + 1; j < c; j++)
        {
            if (s[i] == s[j])
            {
                printf("Error: Enter distinct characters\n");
                return 0;
            }
        }
    }
    fun_NRPS(s, c, n);

    return 0;
}

