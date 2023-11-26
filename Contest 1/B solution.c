#include <stdio.h>

int binarySearchIterative(int arr[], int N, int key) {
    int low = 0, high = N - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return 1;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return 0;
}


int binarySearchRecursive(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return 1;
        } else if (arr[mid] < key) {
            return binarySearchRecursive(arr, mid + 1, high, key);
        } else {
            return binarySearchRecursive(arr, low, mid - 1, key);
        }
    }
    return 0;
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    int arr[N];


    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }


    int resultIterative = binarySearchIterative(arr, N, K);


    int resultRecursive = binarySearchRecursive(arr, 0, N - 1, K);

    if (resultIterative || resultRecursive) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
