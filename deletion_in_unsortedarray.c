#include <stdio.h>

void deleteElement(int arr[], int *size, int element) {
    int found = 0;

    // Find the position of the element in the array
    for (int i = 0; i < *size; i++) {
        if (arr[i] == element) {
            found = 1;

            // Move elements after the found element to fill the gap
            for (int j = i; j < *size - 1; j++) {
                arr[j] = arr[j + 1];
            }

            // Decrease the size of the array
            (*size)--;
            break;
        }
    }

    if (!found) {
        printf("Element not found in the array.\n");
    }
}

int main() {
    int unsorted_array[] = {4, 2, 8, 1, 5};
    int size = sizeof(unsorted_array) / sizeof(unsorted_array[0]);

    int element_to_delete = 8;

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", unsorted_array[i]);
    }

    deleteElement(unsorted_array, &size, element_to_delete);

    printf("\nArray after deleting %d: ", element_to_delete);
    for (int i = 0; i < size; i++) {
        printf("%d ", unsorted_array[i]);
    }

    return 0;
}