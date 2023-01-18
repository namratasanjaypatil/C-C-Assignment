#include<stdio.h>

// wap to check the given year is leap year or not.

int main()
{
    int year;

    printf("Enter a year; ");
    scanf("%d", &year);
    
    if((year % 4 == 0) && (year % 400 == 0)  || (year % 100 != 0))
    {
        printf("%d is leap year", &year);
    }
    else
    {
        printf("%d is a not leap year", &year);
    }

    return 0;
}