#include <stdio.h>

void copyString(char source[], char destination[], int index) {
    if (source[index] == '\0') {
        destination[index] = '\0'; // Terminate the destination string
        return;
    }
    destination[index] = source[index];
    copyString(source, destination, index + 1);
}

int main() {
    char source[] = "Hello, World!";
    char destination[50]; // Assuming the destination buffer is large enough

    copyString(source, destination, 0);

    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);

    return 0;
}

