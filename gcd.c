#include <stdio.h>

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Ensure both numbers are positive
    if (num1 < 0 || num2 < 0) {
        printf("GCD is not defined for negative numbers.\n");
        return 1;
    }

    // Calculate and print GCD
    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}

