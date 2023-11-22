#include<stdio.h>

fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);

}
int main ()
{
    int n;

    printf("Enter a integer number : ");
    scanf("%d", &n);

    int result = fact(n);

    printf("%d! = %d\n", n, result);

    return 0;
}


