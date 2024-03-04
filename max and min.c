#include <stdio.h>

int main() {
    int count, i;
    int num;
    int min, max;

    // Ask the user for the number of elements in the sequence
    printf("Enter the number of elements in the sequence: ");
    scanf("%d", &count);

    // Ask the user to input the numbers in the sequence
    printf("Enter the sequence of numbers: ");

    // Read the first number to initialize min and max
    scanf("%d", &num);
    min = max = num;

    // Loop through the remaining numbers in the sequence
    for (i = 1; i < count; i++) {
        scanf("%d", &num);

        // Update the minimum and maximum values if necessary
        if (num < min) {
            min = num;
        } 
        if (num > max) {
            max = num;
        }
    }

    // Output the minimum and maximum values
    printf("Minimum element in the sequence: %d\n", min);
    printf("Maximum element in the sequence: %d\n", max);

    return 0;
}



