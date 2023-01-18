#include<stdio.h>

    // Wap to convert years into days and days into years.

int main ()
{
    int nodays, days, years;
    printf("Enter the total days: ");
    scanf("%d",&nodays);
    
    days =(nodays%365)%7;
    years =(nodays/365);
    
    printf("%d=%d days,%d years  \n",nodays,years,days);

    return 0;
}