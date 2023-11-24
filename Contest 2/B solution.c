#include <stdio.h>
#include <stdlib.h>

int com(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int n, m = 0, i;
    scanf("%d", &n);
    int a[n + 5];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    qsort(a, n, sizeof(int), com);

    for (i = 0; i < n; i += 2)
    {
        if (a[i] != a[i + 1])
            m += (a[i + 1] - a[i]);
    }

    printf("%d\n", m);

    return 0;
}
