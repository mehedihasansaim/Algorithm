#include <stdio.h>
int main()
{
    int n;
    printf("Enter your array size : ");
    scanf("%d",&n);

    int array[n];
    int low, high, mid, key;


    printf("Enter %d elements : ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter value you want to search : ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    mid = (low + high)/2;

    while(low <= high)
    {
        if(array[mid] < key){
             low = mid + 1;
        }
        else if (array[mid] == key)
        {
            printf("%d is found at position %d.", key, mid+1);
            break;
        }
        else{
            high = mid - 1;
        }

        mid = (low + high)/2;
    }


    if(low > high){
        printf("Not found! %d is not present in the list\n", key);
    }

    return 0;
}
