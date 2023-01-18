#include<stdio.h>

// wap to calculate sum of 5 subjects & find the percentage. subject marks enter by user.

int main()
{
    int sub1, sub2, sub3, sub4, sub5, sum, total=500;
    float percentage;

    printf("Enter marks of 5 subject/n");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    printf("Sum : %d/n", sum);

    percentage = (sum*100/total);
    printf("Percentage:%f", percentage);

    return 0;
}
