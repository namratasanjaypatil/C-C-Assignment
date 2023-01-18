#include<stdio.h>

// wap to show swap of two numbers without using third variable.

int main()
{
    int a=10, b=20;

    a=a+b;
    b=a-b;
    a=a-b;
    printf("a = %d\tb = %d", a, b);

    return 0;
}