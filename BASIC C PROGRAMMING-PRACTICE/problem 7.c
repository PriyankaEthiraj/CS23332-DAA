/* Write a C program to find the quotient and reminder of given integers. */

#include <stdio.h>
int main() {
    int dividend, divisor;
    scanf("%d %d", &dividend, &divisor);
    printf("%d\n%d\n", dividend / divisor, dividend % divisor);
    return 0;
}
