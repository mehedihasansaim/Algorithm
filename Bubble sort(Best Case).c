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
    printf("Arrays are : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }


    int j, temp, count=0;
    for(i=0; i<n-1; i++)
    {
        printf("\nWorking on pass number %d\n", i+1);
        count = 1;
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count=0;
            }
        }
        if(count == 1)
            break;
    }
    printf("\nAfter Sorting : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

