/* Two numbers M and N are passed as the input. A number X is also passed as the input. The program must print the numbers divisible by X from N to M (inclusive of M and N).
Input Format:
The first line denotes the value of M
The second line denotes the value of N
The third line denotes the value of X
Output Format:
Numbers divisible by X from N to M, with each number separated by a space.
Boundary Conditions:
1 <= M <= 9999999
M < N <= 9999999
1 <= X <= 9999
Example Input/Output 1:
Input:
2
40
7
Output:
35 28 21 14 7
Example Input/Output 2:
Input:
66
121
11
Output:
121 110 99 88 77 66 */

#include <stdio.h>
int main() {
    int M, N, X;
    scanf("%d %d %d", &M, &N, &X);
    int start = N - (N % X);
    for (int i = start; i >= M; i -= X) {
        printf("%d ", i);
    }
    return 0;
}
