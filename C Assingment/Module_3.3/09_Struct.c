#include<stdio.h>

    /* wap ofprovides the Structure employee that provides the following  information - print and display empno, empname, address and age.*/

struct display
{
    int no;
    int age;
    char name[100];
    char Address[100];
};
int main()
{
    struct display e1 = {101, 30, "Niral Patel", "A-603,Exotic Residency,Dandi road,surat."};
    printf("%d  %d  %s  %s", e1.no, e1.age, e1.name, e1.Address);
    
    return 0;
}