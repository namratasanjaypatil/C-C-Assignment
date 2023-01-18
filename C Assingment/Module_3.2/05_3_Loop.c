# include<stdio.h>

    // How many Even and Odd numbers are there.....

int main()
{
    int i;

    printf("Even num are: ");
    i=0;
    while(i<=10)
    {
        printf("%d\n",i);
        i=i+2;
    }
    printf("Odd num are: ");
    i=1;
    while(i<=10)
    {
        printf("%d\n",i);
        i=i+2;
    }

    return 0;
}