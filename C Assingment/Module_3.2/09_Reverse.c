#include<stdio.h>

    // wap to print number in Reverse order E.g. number=64728-----> reverse=82746

int main()
{
    int n, reminder, rev = 0;

    printf("Enter the value: ");
    scanf("%d",&n);
   
    while(n != 0)
    {
        reminder = n %10;
        rev = rev * 10 + reminder;
        n = n / 10;
    }    
    printf("\nReverse Number is = %d\n",rev);
    
    return 0;
}