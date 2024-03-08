#include <stdio.h>

int main() {
    int a = 5, b = 10;
    printf("a = %d, b = %d\n", a, b);

// Equal to
    if (a == b) {
        printf("a is equal to b\n");
    } else {
        printf("a is not equal to b\n");
    }

// Not equal to
    if (a != b) {
        printf("a is not equal to b\n");
    } else {
        printf("a is equal to b\n");
    }
// Less than
    if (a < b) {
        printf("a is less than b\n");
    } else {
        printf("a is not less than b\n");
    }
// Greater than
    if (a > b) {
        printf("a is greater than b\n");
    } else {
        printf("a is not greater than b\n");
    }

// Less than or equal to
    if (a <= b) {
        printf("a is less than or equal to b\n");
    } else {
        printf("a is neither less than nor equal to b\n");
    }

// Greater than or equal to
    if (a >= b) {
        printf("a is greater than or equal to b\n");
    } else {
        printf("a is neither greater than nor equal to b\n");
    }

    return 0;
}
