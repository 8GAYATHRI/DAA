#include <stdio.h>
#include <string.h>

void reverseString(char str[], int start, int end) {
    if (start >= end)
        return;

    // Swap characters at start and end indices
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursively call reverseString with updated start and end indices
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[] = "Hello, World!";
    int length = strlen(str);

    // Print original string
    printf("Original string: %s\n", str);

    // Reverse the string recursively
    reverseString(str, 0, length - 1);

    // Print reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}

