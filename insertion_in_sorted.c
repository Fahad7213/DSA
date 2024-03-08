#include <stdio.h>

void insertElement(int arr[], int *size, int capacity, int num) {
    if (*size >= capacity) {
        printf("Array is full. Cannot insert element.\n");
        return;
    }
int i = *size - 1;
    while (i >= 0 && arr[i] > num) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = num;
    (*size)++;

    printf("Element %d inserted successfully.\n", num);
}

int main() {
    int arr[10] = {2, 4, 7, 10, 15};
    int size = 5;
    int capacity = 10;
    int num;

    printf("Enter the element you want to insert: ");
    scanf("%d", &num);
    insertElement(arr, &size, capacity, num);
    printf("Updated array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}