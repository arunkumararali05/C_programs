#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter %d elements for the array:\n", size);
    for(int i = 0; i < size; i++) {
        printf("Enter element at position %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("\nThe array elements are:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
