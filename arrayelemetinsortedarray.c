#include <stdio.h>

int main() {
    // Create a sorted array
    int sorted_array[] = {1, 3, 5, 7, 9, 11, 13, 15};

    int array_size = sizeof(sorted_array) / sizeof(sorted_array[0]);
    int index_to_select = 2;

    if (index_to_select >= 0 && index_to_select < array_size) {
        int selected_element = sorted_array[index_to_select];
        printf("The sorted array is: ");
        
        for (int i = 0; i < array_size; i++) {
            printf("%d ", sorted_array[i]);
        }

        printf("\nThe element at index %d is: %d\n", index_to_select, selected_element);
    } else {
        printf("Index out of bounds.\n");
    }

    return 0;
}