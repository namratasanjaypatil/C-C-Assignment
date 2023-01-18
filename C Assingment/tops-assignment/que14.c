/* 
   wap user enter the 5 subjects mark. you have to make a total and find the percentage.

   percentage > 75 you have to print "Distinction"
   percentage > 60 and percentage <=75 you have to print "First class"
   percentage > 50 and percentage <=60 you have to print "Second class" 
   percentage > 35 and percentage <=50 you have to print "Pass class"
   otherwise print "Fial"
*/

#include<stdio.h>

int main()
{
    int eng, math, bio, chem, phy;
    float percentage;

    printf("enter mark for eng: ");
    scanf("%d", &eng);

    printf("enter mark for math: ");
    scanf("%d", &math);

    printf("enter mark for bio: ");
    scanf("%d", &bio);

    printf("enter mark for chem: ");
    scanf("%d", &chem);

    printf("enter mark for phy: ");
    scanf("%d", &phy);

    percentage = (eng, math, bio, chem, phy) / 5.0;
    
    printf("Percentaga = %.2f\n", percentage);

    if(percentage >= 75)
    printf("Distinction");

    else if(percentage >60  && percentage<=75)
    printf("First class");

    else if(percentage >50 && percentage<=60)
    printf("Second class");

    else if(percentage >35 && percentage<=50)
    printf("pass class"); 

    printf("otherwise Fail");

    return 0;
}