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
    printf("S.No  Name             Quantity          Cost       Amount\n");
    printf("----------------------------------------------------------\n");

    float total = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("%d.", i + 1);
        printf("%8s", string[i]);
        printf("%22d", piece[i]);
        printf("%13.2f", cost[i]);

        float amount = cost[i] * piece[i];
        total += amount;

        printf("%13.2f", amount);
        printf("\n");
    }

    printf("----------------------------------------------------------\n");
    printf("Total%27d%26.2f\n", piece[0] + piece[1] + piece[2], total);
    printf("----------------------------------------------------------\n");

    return 0;
}

