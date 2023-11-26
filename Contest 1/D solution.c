#include<stdio.h>
int main()
{
    int i,j,k,tr_case,n,t,train[51],swap;
    while(scanf("%d",&tr_case)==1)
    {
        for(k=0; k<tr_case; k++)
        {
            swap=0;
            scanf("%d",&n);
            for(i=0; i<n; i++)
                scanf("%d",&train[i]);

            for(i=0; i<n-1; i++)
                for(j=0; j<n-i-1; j++)
                    if(train[j]>train[j+1])
                    {
                        swap++;
                        t=train[j];
                        train[j]=train[j+1];
                        train[j+1]=t;
                    }
            printf("Optimal train swapping takes %d swaps.\n",swap);
        }
    }
    return 0;
}
