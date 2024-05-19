#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    char vowels[] = {'a', 'e', 'i', 'o', 'u'};

    char *fruits[] = {"Apple", "Banana", "Orange", "Grapes", "Mango"};

    printf("Array of integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");

    printf("Array of characters:\n");
    for (int i = 0; i < 5; i++) {
        printf("%c ", vowels[i]);
    }
    printf("\n\n");

    printf("Array of strings:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", fruits[i]);
    }

    return 0;
}
