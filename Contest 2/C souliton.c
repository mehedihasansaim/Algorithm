#include <stdio.h>
#include <string.h>

#define MAX_N 105
#define MAX_W 100005

int wt[MAX_N], val[MAX_N];
long long dp[MAX_N][MAX_W];

long long solve(int idx, int wt_left) {
    if (wt_left == 0)
        return 0;
    if (idx < 0)
        return 0;
    if (dp[idx][wt_left] != -1)
        return dp[idx][wt_left];

    long long ans = solve(idx - 1, wt_left);
    if (wt_left - wt[idx] >= 0)
        ans = (ans > solve(idx - 1, wt_left - wt[idx]) + val[idx]) ? ans : (solve(idx - 1, wt_left - wt[idx]) + val[idx]);

    return dp[idx][wt_left] = ans;
}

int main() {
    memset(dp, -1, sizeof(dp));
    int n, a;
    scanf("%d %d", &n, &a);

    for (int i = 0; i < n; i++)
        scanf("%d %d", &wt[i], &val[i]);

    long long x = solve(n - 1, a);
    printf("%lld\n", x);
    return 0;
}
