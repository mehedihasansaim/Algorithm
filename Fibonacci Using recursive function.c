#include <stdio.h>

// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    printf("Enter the range of Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

