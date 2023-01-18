#include<stdio.h>

// wap to check the given number is positive, negative.

int main()
{
    
    int num;
    
    printf("Input a number:");
    scanf("%d", &num);
    if(num>=0)
       printf("%d is a positive number\n", num);
    else   
        printf("%d is a negative number\n", num);

    return 0;
}