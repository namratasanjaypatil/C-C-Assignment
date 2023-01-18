#include<stdio.h>

    // wap to swap two number without using third variable.

int main()
{
    int a=23,b=24;

    printf("value of a before swapping is:%d\n",a);
    printf("value of b before swaping is:%d\n",b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("value of a after swapiing is:%d\n",a);
    printf("value of b after swaping is:%d\n",b);

    return 0;
}