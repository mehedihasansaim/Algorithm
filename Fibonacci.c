#include<stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter range of fibonacci series : ");
    scanf("%d", &n);

    int n1=0, n2=1, fibo;
    while(count<n)
    {
        if(count<=n)
        {
            fibo = count;
        }
        else
        {
            fibo = n1 + n2;
            n1 = n2;
            n2 = fibo;
        }
        printf("%d ", fibo);
        count++;
    }
    return 0;
}

