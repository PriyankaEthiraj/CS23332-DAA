#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    int i = 0, j = 1;

    while (i < n && j < n) {
        if (i != j) {
            int diff = arr[j] - arr[i];
            if (diff == k) {
                printf("1\n");
                return 0;
            } else if (diff < k) {
                j++;
            } else {
                i++;
            }
        } else {
            j++;
        }
    }

    printf("0\n");
    return 0;
}
