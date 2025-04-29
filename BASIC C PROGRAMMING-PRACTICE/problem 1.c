// question 1: Given two numbers, write a C program to swap the given numbers.

#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int temp = a;
    a = b;
    b = temp;
    printf("%d %d\n", a, b);
    return 0;
}