#include<stdio.h>

// wap to find the area of tringle.

int main()
{
    float pi= 3.14, area, H, B;
    printf("Enter height and Base of triangle: \n");
    scanf("%f %f", &H, &B);
    area=((H*B)/2);
    printf("area of triangle is: %f\n", area);
    return 0;
}