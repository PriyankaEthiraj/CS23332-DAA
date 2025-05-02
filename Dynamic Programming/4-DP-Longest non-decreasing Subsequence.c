/*Problem statement:

Find the length of the Longest Non-decreasing Subsequence in a given Sequence.
*/

#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int n;
    scanf("%d", &n);
    int seq[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &seq[i]);

    int dp[n];
    for (int i = 0; i < n; i++)
        dp[i] = 1;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (seq[j] <= seq[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
        if (dp[i] > ans)
            ans = dp[i];

    printf("%d\n", ans);
    return 0;
}
