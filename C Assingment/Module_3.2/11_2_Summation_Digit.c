#include<stdio.h>

    // wap make a you have make  Summation of First and Last digit..(E.g.1234 Ans-5)

int main()
{
    int n = 1234, sum = 0, rem, r;

    r = n%10;
    while(n != 0)
    {
        rem = n % 10;
        n /= 10;
    }
    printf("Sum of first & last digits are %d\n",rem+r);
    
    return 0;
}