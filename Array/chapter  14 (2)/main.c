#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to convert a string to uppercase
void stringToUpper(char *str) {
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Convert the string to uppercase
    stringToUpper(str);

    printf("Uppercase string: %s\n", str);

    return 0;
}
