#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;

    // Iterate over the entire array
    for (i = 0; i < n-1; i++) {
        // Find the index of the minimum element in the unsorted part
        minIndex = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the minimum element with the first element of the unsorted part
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int i, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Perfform selection sort
    selectionSort(arr, n);

    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


