#include <stdio.h>

long long calculateFactorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * calculateFactorial(n - 1);
}

int main() {
    int number;
    long long factorial;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    factorial = calculateFactorial(number);

    printf("Factorial of %d = %lld\n", number, factorial);

    return 0;
}
