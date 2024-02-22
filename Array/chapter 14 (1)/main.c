#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to remove leading and trailing blanks from a string
void trim(char *str) {
    int start = 0, end = strlen(str) - 1;

    // Find the position of the first non-space character
    while (isspace(str[start]))
        start++;

    // Find the position of the last non-space character
    while (isspace(str[end]))
        end--;

    // Shift the non-space characters to the beginning of the string
    for (int i = 0; i <= end - start; i++)
        str[i] = str[start + i];

    // Null-terminate the trimmed string
    str[end - start + 1] = '\0';
}

// Function to extract and return the last name from a string containing a first name followed by a last name
char *extractLastName(const char *fullName) {
    const char *lastSpace = strrchr(fullName, ' '); // Find the last space in the string

    if (lastSpace == NULL) // No space found, return NULL
        return NULL;

    return (char *)(lastSpace + 1); // Return a pointer to the character after the last space
}

int main() {
    char fullName[100];

    printf("Enter first name followed by a space and then last name: ");
    fgets(fullName, sizeof(fullName), stdin);

    // Remove leading and trailing blanks
    trim(fullName);

    // Extract and print the last name
    char *lastName = extractLastName(fullName);
    if (lastName != NULL) {
        printf("Last name: %s\n", lastName);
    } else {
        printf("No last name found.\n");
    }

    return 0;
}d
