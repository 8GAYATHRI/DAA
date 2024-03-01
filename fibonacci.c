#include <stdio.h>

// Function to generate Fibonacci series
void generateFibonacci(int n) {
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Call function to generate Fibonacci series
    generateFibonacci(n);

    return 0;
}

