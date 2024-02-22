#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to get the first word from a string and return the remainder
char* getFirstWord(char *str) {
    static char remainder[100]; // Assuming maximum word length of 100 characters
    int i = 0, j = 0;

    // Skip leading spaces
    while (isspace(str[i]))
        i++;

    // Copy characters until a space or null terminator is encountered
    while (str[i] != '\0' && !isspace(str[i])) {
        remainder[j++] = str[i++];
    }

    // Null-terminate the remainder string
    remainder[j] = '\0';

    // Skip remaining spaces
    while (isspace(str[i]))
        i++;

    // Shift the remaining string to the beginning
    memmove(str, &str[i], strlen(&str[i]) + 1);

    return remainder;
}

int main() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the newline character if present
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }

    // Get the first word and remainder
    char *firstWord = getFirstWord(input);
    printf("First word: %s\n", firstWord);
    printf("Remainder: %s\n", input);

    return 0;
}
