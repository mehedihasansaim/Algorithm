#include <stdio.h>
#include <stdlib.h>


int calculateMinDistance(int n, int positions[]) {

    int minPos = positions[0];
    int maxPos = positions[0];
    int i;
    for ( i = 1; i < n; i++) {
        if (positions[i] < minPos) {
            minPos = positions[i];
        }
        if (positions[i] > maxPos) {
            maxPos = positions[i];
        }
    }

    return 2 * (maxPos - minPos);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int positions[n];
        int i;
        for ( i = 0; i < n; i++) {
            scanf("%d", &positions[i]);
        }

        int result = calculateMinDistance(n, positions);
        printf("%d\n", result);
    }

    return 0;
}
