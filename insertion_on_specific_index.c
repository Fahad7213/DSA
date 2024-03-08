#include <stdio.h>

void insertElementAtIndex(int arr[], int *size, int capacity, int index, int num) {
    if (*size >= capacity || index < 0 || index > *size) {
        printf("Invalid index or array is full. Cannot insert element.\n");
        return;
    }
    for (int i = *size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = num;
    (*size)++;

    printf("Element %d inserted successfully at index %d.\n", num, index);
}

int main() {
    int arr[10] = {2,3,6,10,13};
    int size = 5;
    int capacity = 10;
    int index = 4;
    int num;

    printf("Enter the element you want to insert: ");
    scanf("%d", &num);
    insertElementAtIndex(arr, &size, capacity, index, num);
    printf("Updated array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
