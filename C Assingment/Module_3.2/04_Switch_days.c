#include<stdio.h>

    // wap to show Monday to Sunday using switch case.

int main()
{
    char days;
    
    printf("enter the days");
    scanf("%c",&days);
    switch(days)
    {
        case 'm':
        printf("Monday");
        break;

        case 'd':
        printf("Tuesday");
        break;
        
        case 'w':
        printf("Wendsday");
        break;
        
        case 't':
        printf("Thrusday");
        break;
        
        case 'f':
        printf("Friday");
        break;
        
        case 's':
        printf("Saturady");
        break;
        
        case 'u':
        printf("Sunday");
        break;

    default:
    printf("invalid days");
    }

    return 0;
}