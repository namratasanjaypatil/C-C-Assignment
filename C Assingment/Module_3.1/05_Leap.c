#include<stdio.h>

    // Wap to check if the given year is a leap year or not.

int main ()
{
    //Output enter year 2022  2023  2024
    int y;
    printf("Enter year:");
    scanf("%d",&y);

    if(y%400==0 || y%4==0 && y%100!=0)
    {
        printf("%d is leap year",y);
    }
    else
    {
        printf("%d is not leap year",y);
    }
    return 0;
}