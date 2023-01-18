#include <iostream>
using namespace std;

    // wap of Addition, Subtraction, Division, Multiplication using constructor.

class Chemistry
{
    int a, b;

public:
    Chemistry(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    void calc()
    {
        cout << "the Addition of two no.s is: " << a + b << endl;
        cout << "the Subtraction of two no.s is: " << a - b << endl;
        cout << "the Multplition of two no.s is: " << a * b << endl;
        cout << "the Division of two no.s is: " << a / b << endl;
    }
};
int main()
{
    Chemistry s1(15, 5);
    s1.calc();
}
