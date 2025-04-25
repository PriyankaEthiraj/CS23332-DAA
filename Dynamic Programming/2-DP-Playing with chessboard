/*Playing with Chessboard:

Ram is given with an n*n chessboard with each cell with a monetary value. Ram stands at the (0,0), that the position of the top left white rook. He is been given a task to reach the bottom right black rook position (n-1, n-1) constrained that he needs to reach the position by traveling the maximum monetary path under the condition that he can only travel one step right or one step down the board. Help ram to achieve it by providing an efficient DP algorithm.*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int chessboard[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &chessboard[i][j]);
        }
    }

    int dp[n][n];
    dp[0][0] = chessboard[0][0];

    for (int j = 1; j < n; j++) {
        dp[0][j] = dp[0][j - 1] + chessboard[0][j];
    }

    for (int i = 1; i < n; i++) {
        dp[i][0] = dp[i - 1][0] + chessboard[i][0];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = chessboard[i][j] + (dp[i - 1][j] > dp[i][j - 1] ? dp[i - 1][j] : dp[i][j - 1]);
        }
    }

    printf("%d\n", dp[n - 1][n - 1]);

    return 0;
}
