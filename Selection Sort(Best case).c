#include <stdio.h>

int main()
{
    int n=8;
    int arr[] = {2, 10, 8, 14, 6, 5, 50, 0};

    printf("Before Sorting : ");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);

    selectionSort(arr, n);

    printf("\n\After Sorting : ");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

void selectionSort(int arr[], int n)
{
    int i, j, temp, min, count;

    for(i=0; i<n-1; i++) //for min
    {
        min = i, count=1;

        for(j=i+1; j<n; j++)//for compare
        {
            if(arr[min] > arr[j])
                min = j;
        }
        if(min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;

            count = 0;
            printf("\n\nStep : %d\n", i);
            for(int i=0; i<n; i++)
                printf("%d ", arr[i]);
        }

        if(count == 1)
            break;
    }
}

