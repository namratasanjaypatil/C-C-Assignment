#include<stdio.h>

    // wap to find simple interest.

int main()
{
    float i,P,R,T;
    
    printf("Enter the Principl Amount: ");
    scanf("%f",&P);
    printf("Enter the Rate: ");
    scanf("%f",&R);
    printf("Enter the Time: ");
    scanf("%f",&T);
    i=(P*R*T)/100;
    printf("The interest is %.2f\n",i);

    return 0;
}