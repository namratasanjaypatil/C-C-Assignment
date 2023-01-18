#include<stdio.h>
#include<string.h>

    // wap to find reverse of string using recursion. 

void rev(char *s);

int main()
{
    char s[]= "AshWini";
    rev(s);
    printf("\n");

    return 0;
}

void rev(char *s)
{
    if(*s != '\0')
    {
        rev(s+1);
        printf("%c",*s);
    }
}