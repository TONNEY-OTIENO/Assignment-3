#include <stdio.h>

int main() {
    // Typecasting examples
    int x = 10;
    float y = 5.5;
    char ch = 'A';

    // Typecasting from int to float
    float result1 = (float)x;
    printf("Typecasted int to float: %.2f\n", result1);

    // Typecasting from float to int
    int result2 = (int)y;
    printf("Typecasted float to int: %d\n", result2);

    // Typecasting from char to int
    int result3 = (int)ch;
    printf("Typecasted char to int: %d\n", result3);

    // Precedence examples
    int a = 5, b = 3, c = 2;
    int result4 = a + b * c; // Multiplication has higher precedence than addition
    printf("Result of a + b * c: %d\n", result4);

    int result5 = (a + b) * c; // Parentheses can be used to control precedence
    printf("Result of (a + b) * c: %d\n", result5);

    return 0;
}
