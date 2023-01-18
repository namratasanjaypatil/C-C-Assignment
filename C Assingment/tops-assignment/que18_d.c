#include<stdio.h>

// wap you have to find the factorial of given number.

int main()
{
    int i, fact=1, n;
    printf("Enter the value");
    scanf("%d", &n);
    
    for(i=n; i>=1; i--)
    {
        fact*=i;
    }
    printf("factorial of %d is %d", n, fact);
    
    return 0;
}