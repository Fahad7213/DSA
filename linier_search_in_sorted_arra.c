#include<stdio.h>

int main() {
    int num, i, arr[5]={3,4,5,6,7};

    printf("Enter the number you want to search in the sorted array: ");
    scanf("%d", &num);
for (i = 0; i < 5; i++) {
        if (num == arr[i]) {
            printf("Number found at index: %d\n", i);
            break;  

        }
    }

    if (i == 5) {
        printf("Not found\n");
    }

    return 0;
}