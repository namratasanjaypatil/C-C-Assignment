#include<stdio.h>
#include<conio.h>

/* wap to enter a ten elements using array and find out 
 the to count the total number of odd and even numbers.*/

int main()
{
    int i, odd, even, count; 
    int a[10];                   // {1,2,3,4,5,6,7,8,9,10};
    printf("using a ten elements/n")
    
    for(i=0; i<=10; i++)
        scanf("%d", &a[10]);
    for(i=0; i<=10; i++)
    {
        if(a[i]%2==0)
        even count++;
        else
            odd count++;
    }
        printf("\ntotal even numbers: %d", odd count);
        printf("\ntotal odd numbers: %d", even count);

    getch();   
    return 0;
}