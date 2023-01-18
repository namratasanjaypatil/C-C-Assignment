#include <stdio.h>

    // wap to print table up to given numbers.

int main()
{
    int i, n;

    printf("Enter the value:  ");
    scanf("%d",&n);

    for(i=1; i<=10; i++)
    {
        printf("%d * %d= %d\n", n, i, n*i);
    }

    return 0;
}