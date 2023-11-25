#include <stdio.h>
#include <stdlib.h>


int calculateDistance(int n, int positions[]) {

    int minPosition = positions[0];
    int maxPos = positions[0];
    int i;
    for ( i = 1; i < n; i++) {
        if (positions[i] < minPosition) {
            minPosition = positions[i];
        }
        if (positions[i] > maxPos) {
            maxPos = positions[i];
        }
    }

    return 2 * (maxPos - minPosition);
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

        int result = calculateDistance(n, positions);
        printf("%d\n", result);
    }

    return 0;
}
