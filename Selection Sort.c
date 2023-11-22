#include<stdio.h>
int main()
{

    int n;
    printf("Enter your array size: ");
    scanf("%d", &n);

    int a[n], i, j;
    printf("Enter your value of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d  ",a[i]);
    }


//for sorting array
    printf("\n\n");
    for(i=0; i<n; i++)
    {
        int min_idx = i;
        //inner loop to find minimum index
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[min_idx])
            {
                min_idx = j;
            }
        }
        //swap two numbers(i, min_idx)
        int temp = a[i];
        a[i] = a[min_idx];
        a[min_idx] =  temp;
    }
    //print the sorted array
    for(i=0; i<n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n\n");



    return 0;
}

