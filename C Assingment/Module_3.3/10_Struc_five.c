#include<stdio.h>

    /* wap ofprovides the Structure five employee that provides the following  information - print and display empno, empname, address and age.*/

struct display
{
    int no;
    int age;
    char name[100];
    char Address[100];
};
int main()
{
    struct display e1 = {101, 26, "  Niral Patel", "A-603,Exotic Residency,Dandi Road, surat.\n"};
    printf(" %d %d %s %s\n", e1.no, e1.age, e1.name, e1.Address);
    struct display e2 = {102, 36, "  Kishan Patel", "B-103,Dipkamal com,Pal jakat naka, surat.\n"};
    printf(" %d %d %s %s\n", e2.no, e2.age, e2.name, e2.Address);
    struct display e3 = {103, 25, "  Kajal Patel", "C-104,Bansidhar residency, surat.\n"};
    printf(" %d %d %s %s\n", e3.no, e3.age, e3.name, e3.Address);
    struct display e4 = {104, 30, "  Disha Mehta", "D-105,Ganganagar,Althan, surat.\n"};
    printf(" %d %d %s %s\n", e4.no, e4.age, e4.name, e4.Address);
    struct display e5 = {105, 44, "  Riya Trivedi", "A-402,Madhuvan bangalo,Pal Road, surat.\n"};
    printf(" %d %d %s %s\n", e5.no, e5.age, e5.name, e5.Address);
    
    return 0;
}