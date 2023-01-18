#include<stdio.h>

    // wap a program to find out the Max from given number(E.g. 1562----> Max num is 6)

int main()
{
    int num, rem, max=0;

    printf("Enter the value: ");
    scanf("%d", &num);

    while(num != 0)
    {
        rem= num % 10;
        
        if(max < rem)
        {
            max = rem;
        }
        num = num/10;
    }
    printf("\n Max number is %d ", max);

    return 0;
}