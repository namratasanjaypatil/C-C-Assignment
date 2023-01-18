#include<stdio.h>

// wap you have to print the fibonacci series up to user given number.

int main()
{
    int a=0, b=1, c, n;

    printf("Enter the value");
    scanf("%d", &n);

    for(int i=2; i<=n; i++);
    {
        c=a+b;
        printf("%d", c);
        a=b;
        b=c;
    }
    return 0;
}