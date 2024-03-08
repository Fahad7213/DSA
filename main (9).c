#include <stdio.h>

int main() {
    int a = 10, b = 5, result;

    // Assignment Operator (=)
    result = a;
    printf("Assignment Operator (=): %d\n", result);

// Add and Assign (+=)
    result += b;
    printf("Add and Assign (+=): %d\n", result);

// Subtract and Assign (-=)
    result -= b;
    printf("Subtract and Assign (-=): %d\n", result);
// Multiply and Assign (*=)
    result *= b;
    printf("Multiply and Assign (*=): %d\n", result);
// Divide and Assign (/=)
    result /= b;
    printf("Divide and Assign (/=): %d\n", result);

// Modulus and Assign (%=)
    result %= b;
    printf("Modulus and Assign (%=): %d\n", result);

    return 0;
}