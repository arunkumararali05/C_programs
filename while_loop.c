#include <stdio.h>

int main() {
    int number, i = 1;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1; // Exit program with error code
    }

    while (i <= number) {
        factorial *= i;
        i++;
    }

    printf("Factorial of %d = %lld\n", number, factorial);

    return 0;
}
