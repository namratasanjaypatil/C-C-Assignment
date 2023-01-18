#include <iostream>
using namespace std;

    // wap to create simple calculator using class. 

class Calc
{
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void Addition()
    {
        cout << "Addition of " << a << "and" << b << " is " << a + b << endl;
    }
    void Subtraction()
    {
        cout << "Subtraction of " << a << "and" << b << " is " << a - b << endl;
    }
    void Multiplication()
    {
        cout << "Multiplication of " << a << "and" << b << " is " << a * b << endl;
    }
    void Division()
    {
        cout << "Division of " << a << "and" << b << " is " << a / b << endl;
    }
};
int main()
{
    Calc a1, a2, a3, a4;
    a1.setData(40, 5);
    a1.Addition();
    a1.Subtraction();
    a1.Division();
    a1.Multiplication();

    return 0;
}