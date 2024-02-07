#include <stdio.h>

int main()
{
    char string[3][30];
    int piece[3];
    float cost[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the item %d: ", i + 1);
        fgets(string[i], 30, stdin);
        printf("Enter no of pieces: ");
        scanf("%d", &piece[i]);
        printf("Enter the cost: ");
        scanf("%f", &cost[i]);

        int ch;
        for (; (ch = getc(stdin)) != '\n' && ch != EOF;)
            ;
    }

    printf("----------------------------------------------------------\n");
    printf("S.No  Name                Quantity      Cost        Amount\n");
    printf("----------------------------------------------------------\n");

    float total = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %10.17s %13d %9.2f %13.2f\n", i + 1, string[i], piece[i], cost[i], cost[i] * piece[i]);
        total += cost[i] * piece[i];
    }

    printf("----------------------------------------------------------\n");
    printf("Total%29d%24.2f\n", piece[0] + piece[1] + piece[2], total);
    printf("----------------------------------------------------------\n");

    return 0;
}


