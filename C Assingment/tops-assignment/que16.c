#include<stdio.h>

// wap of Addition, Subtraction, Multiplication and Division using switch case. (must be menu driven)

int main()
{
    int a, b;
    printf("\nenter to numbers and operator: ");
    scanf("%d %d", &a, &b);
    
    switch(a,b)
    {
        case '+':
        printf("Addition is: %d", a,b, a+b);
        break;

        case '-':
        printf("Substraction is: %d", a, b, a-b);
        break;

        case '*':
        printf("Multiplication is: %d", a, b, a*b);
        break;

        case '/':
        printf("Division is: %d", a, b, a/b);
        break;

        difault:
        printf("Not valid");
    }

    return 0;
}
