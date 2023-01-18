#include<stdio.h>

    // wap to take 10 no. Input from user and find out.

int main()
{
    int n=1234, sum=0, rem, r;

    r = n % 10;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
    } 
    printf("Sum of first and last digits are %d\n",rem + r);

    return 0;
}