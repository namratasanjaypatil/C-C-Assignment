#include<stdio.h>

// wap to print the number in reverse order.

int main()
{
    int x=123456789, rem;

    while(x!=0)
    {
        rem = x%10;
        x = x/10;
        printf("%d", rem);
    }

    return 0;
}