#include <stdio.h>

// Function to find the index of the minimum element in the array
int findMinIndex(int a[], int start, int end)
{
    if (start == end)
        return start;

    int minIndex = findMinIndex(a, start + 1, end);

    return (a[start] < a[minIndex]) ? start : minIndex;
}

// Recursive selection sort
void selectionSortRecursive(int a[], int n, int currentIndex)
{
    if (currentIndex == n - 1)
        return; // Sorting is complete

    // Find the minimum element's index in the unsorted part of the array
    int minIndex = findMinIndex(a, currentIndex, n - 1);

    // Swap the minimum element with the current element
    int temp = a[currentIndex];
    a[currentIndex] = a[minIndex];
    a[minIndex] = temp;

    // Recursively sort the remaining part of the array
    selectionSortRecursive(a, n, currentIndex + 1);
}

int main()
{
    int n;
    printf("Enter your array size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the values of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    selectionSortRecursive(a, n, 0);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");

    return 0;
}

