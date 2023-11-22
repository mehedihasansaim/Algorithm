#include <stdio.h>

int main()
{
    int n;
    printf("Enter size : ");
    scanf("%d", &n);

    int arr[n], i;

    printf("\nEnter %d elements : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n);

    printf("Sorted array in ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void insertionSort(int arr[], int n)
{
    int i;
    for(i=1; i<n; i++)
    {
        int key = arr[i];
        int j = i-1;

        while(key < arr[j] && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}


