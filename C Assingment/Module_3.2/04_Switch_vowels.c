#include<stdio.h>

    // wap to show Vowel or Constant using switch case.

int main()
{
    char ch;

    printf("enter the charater");
    scanf("%c",&ch);
    switch(ch)
    {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
             printf("%c is Vowel",ch);
             break;
             default:
             printf("%c is constant",ch);
    }
    
    return 0;
}