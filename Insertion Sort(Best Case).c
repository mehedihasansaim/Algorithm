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

    printf("\nSorted array in ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void insertionSort(int arr[], int n)
{
    int i, count=0;
    for(i=1; i<n; i++)
    {
        int key = arr[i];
        int j = i-1;
        count=1;
        printf("\nWorking on passing %d\n", i);

        while(key < arr[j] && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
            count=0;
        }
        arr[j+1] = key;

        if(count==1)
            break;
    }
}

