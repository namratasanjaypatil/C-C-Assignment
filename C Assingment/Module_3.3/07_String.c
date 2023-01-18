#include<stdio.h>

    // wap find out length of string without using inbuilt function.

int main()
{
    int i,count = 0;
    
    char s[20] = "Tops Technologies";
    for(i=0; s[i] != '\0'; i++)
    {
        count++;
    }
    printf("The length of a string is %d\n",count);

    return 0;
}