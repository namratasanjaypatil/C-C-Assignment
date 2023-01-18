#include<stdio.h>

// wap to find the max number from the given three number using ternary operator.

int main()
{
    int num1=4, num2=6, num3=8, max;

    max= (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    printf("max number given %d, %d and %d is %d.", num1, num2, num3, max);

    return 0;
}