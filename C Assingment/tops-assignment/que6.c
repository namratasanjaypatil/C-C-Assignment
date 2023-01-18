#include<stdio.h>

// wap to find the simple interest.

int main()
{
    float P, R, T, A;
    printf("Enter the Principle Amount: \n");
    scanf("%f", &P);
    
    printf("Enter the Rate: \n");
    scanf("%f", &R);

    printf("Entre the Time: \n");
    scanf("%f", &T);
    A=(P*R*T)/100;
    
    printf("The interest is %f\n", A);
    return 0;
}