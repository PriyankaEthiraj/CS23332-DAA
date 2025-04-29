/* Write a C program to find the power of integers.  
input:
a b
output:
a^b value */

#include <stdio.h>
int main() {
    int a, b, result = 1;
    scanf("%d %d", &a, &b);
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    printf("%d\n", result);
    return 0;
}
