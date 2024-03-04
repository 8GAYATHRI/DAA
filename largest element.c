#include <stdio.h>

int main() {
    int arr[100], size, i;
    int max;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element as maximum
    max = arr[0];

    // Traverse the array to find the largest element
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", max);

    return 0;
}



