#include <stdio.h>
#define MAX 10

int a[MAX];
int rand_seed = 10;

int rand(void) {
    rand_seed = rand_seed * 1103515245 + 12345;
    return (unsigned int)(rand_seed / 65536) % 32768;
}

int main(void) {
    int i;

    // Fill array with random integers
    for (i = 0; i < MAX; i++) {
        a[i] = rand();
        printf("%d\n", a[i]);
    }

    // More code will go here in a minute

    return 0;
}
