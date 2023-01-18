#include<stdio.h>

    // wap to find the area of circle, rectangle and triangle.

int main()
{
    float pi=3.14,area,H,B,R,W;

    // Area of Circle
    printf("Enter the Radius of circle: ");
    scanf("%f",&R);
    area=pi*R*R;
    printf("the area of Circle is:%.2f\n",area);

    //Area of Traingle
    printf("Enter Height and Base of Triabgle: \n");
    scanf("%f %f",&H,&B);
    area=((H*B)/2);
    printf("area of Triangle is:%.2f\n",area);

    //Area of Rectangle
    printf("Enter Height and Width Rectangle: \n ");
    scanf("%f %f",&H,&W);
    area=(H*W);
    printf("area of Rectangle is:%.2f\n",area);

    return 0;
}