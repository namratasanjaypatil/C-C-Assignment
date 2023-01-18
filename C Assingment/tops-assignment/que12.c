#include<stdio.h>

// wap to find the max number from the given three number using nested if.

void main()
{
    int a=10, b=17, c=14;

    if(a>b)
    {
        if(a>c)
        
            printf("A is greter");
        
        else
            printf("C is greter");
    }
        else
        {
            if(b>c)
                printf("B is greter");
            
            else
                printf("c is greter");
    }
}