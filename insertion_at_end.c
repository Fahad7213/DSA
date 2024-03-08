#include<stdio.h>

int main() {
    int arr[5] = {3,4,5,6,7};
    int newSize = 6;
    int num;

    printf("Enter the element you want to insert at the end:");
    scanf("%d", &num);
    int newArr[newSize];
    for (int i = 0; i < 5; i++) {
        newArr[i] = arr[i];
    }
    newArr[newSize - 1] = num;

    printf("Updated array after insertion: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", newArr[i]);
    }

    return 0;
}