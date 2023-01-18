#include<stdio.h>

// wap use switch ststement. Display monday to sunday.

int main()
{
	int day;
	printf("\nenter a week day in number (1 to 7): ");
    scanf("%d", &day);
    
    switch (day)
    {
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thursday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sunday");
        break;

        difault:
        printf("invalid input");
        break;
    }
    return 0;
}
