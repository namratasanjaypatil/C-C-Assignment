#include<stdio.h>

    // wap make a Summation of given number.

int main()
{
    int n = 1532, sum = 0, rem;

    while(n != 0)
    {
        rem = n % 10;
        sum = sum +rem;
        n /= 10;
    }
    printf("Sum of individual digits are %d\n",sum);
    
    return 0;
}