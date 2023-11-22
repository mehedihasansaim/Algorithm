#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer number: ");
    scanf("%d", &n);

    int result = 1; // Initialize the result to 1

    for (int i = 1; i <= n; i++)
    {
        result *= i; // Multiply result by each number from 1 to n
    }

    printf("%d! = %d\n", n, result);

    return 0;
}

