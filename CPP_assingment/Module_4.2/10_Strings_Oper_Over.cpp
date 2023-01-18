#include <iostream>
#include <string.h>

    // wap to concatenate the two strings using Operator Overloading.

using namespace std;
#define N 3
class concate
{
    char a[10];

public:
    void setData()
    {
        cout << "\n enter words:";
        gets(a);
    }
    void display()
    {
        cout << a;

        cout << endl;
    }
    void operator+(concate m)
    {
        strcat(a, m.a);
        cout << a;
    }
};
int main()
{
    concate obj1;
    concate obj2;
    obj1.setData();
    obj2.setData();
    obj1.display();
    obj2.display();
    obj1 + obj2;
}