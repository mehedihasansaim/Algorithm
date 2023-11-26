#include <stdio.h>
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int g(int n) {
    while (n >= 10) {
        n = sumOfDigits(n);
    }
    return n;
}

int main() {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        int result = g(n);
        printf("%d\n", result);
    }
    return 0;
}
