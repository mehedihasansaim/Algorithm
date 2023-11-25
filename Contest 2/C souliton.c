#include <stdio.h>
#include <string.h>

#define MAX_N 105
#define MAX_W 100005

int wt[MAX_N], val[MAX_N];
long long dp[MAX_N][MAX_W];

long long s(int idx, int wL) {
    if (wL == 0)
        return 0;
    if (idx < 0)
        return 0;
    if (dp[idx][wL] != -1)
        return dp[idx][wL];

    long long ans = s(idx - 1, wL);
    if (wL - wt[idx] >= 0)
        ans = (ans > s(idx - 1, wL - wt[idx]) + val[idx]) ? ans : (s(idx - 1, wL - wt[idx]) + val[idx]);

    return dp[idx][wL] = ans;
}

int main() {
    memset(dp, -1, sizeof(dp));
    int n, a;
    scanf("%d %d", &n, &a);

    for (int i = 0; i < n; i++)
        scanf("%d %d", &wt[i], &val[i]);

    long long x = s(n - 1, a);
    printf("%lld\n", x);
    return 0;
}
