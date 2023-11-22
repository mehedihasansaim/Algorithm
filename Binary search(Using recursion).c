#include<stdio.h>

int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);

    int arr[n], i, key;

    printf("\nEnter %d elements : ", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }


    printf("\nArrays are : \n");
    for(i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }


    printf("\n\nEnter key : ");
    scanf("%d", &key);

    int pos = binary_search(arr, 0, n-1, key);

    if(pos == -1){
        printf("%d is NOT FOUND...\n", key);
    }
    else{
        printf("%d is FOUND at position %d\n", key, pos+1);
    }


    return 0;
}




int binary_search(int arr[], int low, int high, int key)
{
    int mid;
    if(low <= high){

        mid = (low+high)/2;
        if(arr[mid] < key){
         return  binary_search(arr, mid+1, high, key);
        }
        else if(arr[mid] == key){
         return mid;
        }

        return  binary_search(arr, 0, mid-1, key);
    }

    return -1;
}

