#include <iostream>
using namespace std;

    // wap to calculate the area of circle, rectangle and triangle using Function Overloading.

class Area
{
    float l, b, r, pi = 3.14;

public:
    void area(float r);

    void area(float l, float b);

    void area(float l, float b, float pi);
};

void Area::area(float r)
{
    cout << "Area of circle is: " << pi * r * r << endl;
}
void Area::area(float l, float b)
{
    cout << "Area of rectangle is: " << l * b << endl;
}
void Area::area(float l, float b, float pi)
{
    cout << "Area of triangle is: " << 0.5 * l * b << endl;
}

int main()
{
    Area ques1;
    ques1.area(5);
    ques1.area(4, 9);
    ques1.area(4, 5);
}