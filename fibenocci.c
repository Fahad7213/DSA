
#include <stdio.h>
int main() {
int n, first = 0, second = 1, next;

printf("Enter the number of terms: ");
scanf("%d", &n);

printf("Fibonacci Series: ");
    printf("%d ", first);
        printf("%d ", second);
    for (int i = 0; i < n; i++) {
        next = first + second;
            printf("%d ", next);
        first = second;
        second = next;
    }

    return 0;
}