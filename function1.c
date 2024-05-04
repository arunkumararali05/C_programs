#include <stdio.h>

int calculateSum() {
    int N, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", N, sum);

}

int main() {

    calculateSum();

    return 0;
}
