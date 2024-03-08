#include <stdio.h>

int main() {
    int num1 = 5, num2 = 3;
//
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // Bitwise AND
    printf("%d & %d is %d\n", num1, num2, num1 & num2);

    // Bitwise OR
    printf("%d | %d is %d\n", num1, num2, num1 | num2);

    // Bitwise XOR
    printf("%d ^ %d is %d\n", num1, num2, num1 ^ num2);

    // Bitwise NOT
    printf("~%d is %d\n", num1, ~num1);

    // Left Shift
    printf("%d << 1 is %d\n", num1, num1 << 1);

    // Right Shift
    printf("%d >> 1 is %d\n", num1, num1 >> 1);

    return 0;
}