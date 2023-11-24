#include <stdio.h>

int main() {
    int testNumber = 1;

    while (1) {
        int missileHeights[1000];
        int height, maxInterceptions = 0;

        // Read missile heights for the current test
        int i = 0;
        while (1) {
            scanf("%d", &height);
            if (height == -1) {
                break;
            }
            missileHeights[i++] = height;
        }

        // Check for the end of input
        if (missileHeights[0] == -1) {
            break;
        }

        // Calculate maximum interceptions for the current test
        int lastInterceptedHeight = 0;
        for (int j = 0; j < i; j++) {
            if (missileHeights[j] <= lastInterceptedHeight) {
                lastInterceptedHeight = missileHeights[j];
                maxInterceptions++;
            }
        }

        // Output the result for the current test
        printf("Test #%d:\n", testNumber++);
        printf("maximum possible interceptions: %d\n\n", maxInterceptions);
    }

    return 0;
}

