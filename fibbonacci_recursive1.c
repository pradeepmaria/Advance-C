#include <stdio.h>

int positive_fibonacci(int limit, int num2, int num1, int num);

int main() {
    int limit, i, ret;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    if (limit > 0) {
        ret = positive_fibonacci(limit, 0, 1, 0);
        for (i = 0; i < limit; i++) {
            printf("%d ", ret);
            ret = positive_fibonacci(limit - 1, 0, 1, i + 2);
        }
        printf("\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
}

int positive_fibonacci(int limit, int num2, int num1, int num) {
    if (num <= limit) {
        if (num <= 1) {
            return num;
        }
        int fib = num2 + num1;
        num2 = num1;
        num1 = fib;
        return positive_fibonacci(limit, num2, num1, num + 1);
    } else {
        return num2;
    }
}

