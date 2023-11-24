#include<stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, test = 0, x[1000];
    while(scanf("%d", &x[0]) == 1) {
        if(x[0] < 0)    break;
        n = 1;
        while(scanf("%d", &x[n]) == 1) {
            if(x[n] < 0)    break;
            else
                n++;
        }
        int DP[1000] = {};
        for(i = 0; i < n; i++) {
            for(j = i+1; j < n; j++) {
                if(x[j] < x[i] && DP[j] < DP[i]+1)
                    DP[j] = DP[i]+1;
            }
        }
        int s = 0;
        for(i = 0; i < n; i++)
            s = s > DP[i] ? s : DP[i];
        s++;
        if(test)
            puts("");
        printf("Test #%d:\n", ++test);
        printf("  maximum possible interceptions: %d\n", s);

    }
    return 0;
}
