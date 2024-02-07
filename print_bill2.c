#include <stdio.h>

int main()
{
    char items[3][30];
    int quantities[3];
    float costs[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the item %d: ", i + 1);
        fgets(items[i], 30, stdin);

        printf("Enter no of pcs: ");
        scanf("%d", &quantities[i]);

        printf("Enter the cost: ");
        scanf("%f", &costs[i]);

        // Clear the input buffer
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
            ;
    }

    printf("----------------------------------------------------------\n");
    printf("S.No  Name             Quantity          Cost       Amount\n");
    printf("----------------------------------------------------------\n");

    float total = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("%d.", i + 1);
        printf("%8s", items[i]);
        printf("%22d", quantities[i]);
        printf("%13.2f", costs[i]);
        
        float amount = costs[i] * quantities[i];
        total += amount;

        printf("%13.2f", amount);
        printf("\n");
    }

    printf("----------------------------------------------------------\n");
    printf("Total%27d%26.2f\n", quantities[0] + quantities[1] + quantities[2], total);
    printf("----------------------------------------------------------\n");

    return 0;
}

