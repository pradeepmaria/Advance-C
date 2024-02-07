#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1 || n == -1) {
        return 1;
    } else if (n > 1) {
        return fibonacci(n - 1) + fibonacci(n - 2);
    } else {
        return fibonacci(n + 2) - fibonacci(n + 1);
    }
}

int main() {
    int num_terms = 10; // Change this value to generate different number of Fibonacci terms

    printf("Negative Fibonacci sequence with %d terms:\n", num_terms);
    for (int i = -num_terms; i <= -1; i++) {
        printf("%d ", fibonacci(i));
    }
	printf("\n");
    return 0;
}

