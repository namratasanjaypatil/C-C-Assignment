#include<stdio.h>

    // wap Sum of Even & Odd number by using loop.

int main()
{
    int n=16548, even=0, rem, odd=0;

    while(n != 0)
    {
        rem = n % 10;
        if (rem % 2 == 0)
        {
            even = even + rem;
        }
        else
        {
            odd = odd + rem;
        }
        n /= 10;
    }
    printf("Sum of Even num are %d\n",even);
    printf("Sum of Odd num are %d\n",odd);

    return 0;
}