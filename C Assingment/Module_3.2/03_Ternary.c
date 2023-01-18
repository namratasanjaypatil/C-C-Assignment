#include<stdio.h>

    // wap to find number is even or odd using ternory operator.

int main()
{
    int n;
    
    printf("Enter number:");
    scanf("%d",&n);

    (n%2==0) ? (printf("the num is even")): (printf("the num is odd"));
   
    return 0;
}
