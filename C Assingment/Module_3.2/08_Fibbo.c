#include<stdio.h>

    // wap to Fibbonacci series up to given numbers.

int main()
{
    int a=0, b=1, c,n=15;

    printf(" %d %d ", a, b);
    for(int i=2; i<=n; i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }

    return 0;
}