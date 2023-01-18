#include<stdio.h>

// wap you have to print the table of given number.

int main()
{
    int i, n;
    printf("enter the value");
    scanf("%d", &n);

    for(i=1; i<=10; i++)
    {
        printf("%d*%d = %d\n", n, i, n*i);
    }
    return 0;
}