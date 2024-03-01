#include <stdio.h>

// Function to calculate the factorial of a number using recursion
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num, fact;

    printf("Enter a non-negative integer to calculate its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        fact = factorial(num);
        printf("Factorial of %d = %d\n", num, fact);
    }

    return 0;
}

