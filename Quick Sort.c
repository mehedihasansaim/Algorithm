#include<stdio.h>

int main()
{
    int n = 8;
    int arr[] = {6, 2, 5, 7, 0, 12, 3, 10};

    printf("Before Sorting : ");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);

    quicksort(arr, 0, n-1);

    printf("\n\nAfter Sorting : ");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}

void quicksort(int arr[], int first, int last)
{
    int pivot, i, j, temp;
    if(first < last)
    {
        pivot = first;
        i = first;
        j = last;

        while(i < j)
        {
            while(arr[i] <= arr[pivot])
                i++;
            while(arr[j] > arr[pivot])
                j--;

            if(i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;

        quicksort(arr, 0, j);
        quicksort(arr, j+1, last);
    }
}

