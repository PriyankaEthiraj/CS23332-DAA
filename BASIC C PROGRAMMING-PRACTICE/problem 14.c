/* Write a C program to find Whether the given integer is prime or not. */

#include <stdio.h>
int main() {
    int n, isPrime = 1;
    scanf("%d", &n);
    if (n < 2) {
        printf("No Prime\n");
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
        printf("Prime\n");
    else
        printf("No Prime\n");
    return 0;
}
