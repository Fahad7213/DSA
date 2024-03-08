#include <stdio.h>

int main() {
    int a = 1, b = 0;

    printf("a = %d,b = %d\n",a,b);

// Logical AND
    if (a && b) {
        printf("a AND b is true\n");
    } else {
        printf("a AND b is false\n");
    }

// Logical OR
    if (a || b) {
        printf("a OR b is true\n");
    } else {
        printf("a OR b is false\n");
    }

// Logical NOT
    if (!a) {
        printf("NOT a is true\n");
    } else {
        printf("NOT a is false\n");
    }

    return 0;
}