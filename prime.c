#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num, int divisor) {
    if (divisor <= 1)
        return 1; // True
    if (num % divisor == 0)
        return 0; // False
    return isPrime(num, divisor - 1);
}

// Function to generate all prime numbers up to a given limit
void generatePrimes(int currentNum, int limit) {
    if (currentNum > limit)
        return;
    if (isPrime(currentNum, currentNum / 2) == 1)
        printf("%d ", currentNum);
    generatePrimes(currentNum + 1, limit);
}

int main() {
    int limit;
    printf("Enter the limit to generate prime numbers: ");
    scanf("%d", &limit);

    printf("Prime numbers up to %d are:\n", limit);
    generatePrimes(2, limit);

    return 0;
}

