#include<stdio.h>

int main()
{
    int n=8;
    int arr[] = {2, 1, 0, 10, 15, 500, 47, 100};

    int key;
    printf("Enter key : ");
    scanf("%d", &key);

    int pos = linear_search(arr, 0, key, n);

    if(pos == -1)
    {
        printf("%d is no found\n", key);
    }
    else
    {
        printf("%d is found at position : %d\n", pos+1);
    }


    return 0;

}

int linear_search(int arr[], int i, int key, int n)
{
    if(i<n)
    {
        if(arr[i] == key){
            return i;
        }

        return linear_search(arr, i+1, key, n);
    }

    return -1;
}

