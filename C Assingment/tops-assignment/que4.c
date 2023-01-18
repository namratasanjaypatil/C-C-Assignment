#include<stdio.h>

// wap to find the area of circle.

int main()
{
    float pi= 3.14, area, R;
    printf("Enter the Radius of circle: \n");
    scanf("%f", &R);
    area= pi*R*R;
    printf("the area of circle is : %f\n", area);
    return 0;
}