#include <iostream>
#include <cmath>

    // wap to find the multiplication values and the cubic values using inline function.

using namespace std;

inline int multi(int a, int b)
{
    cout << "The multiplication is: " << a * b << endl;
}

inline int cube(int a)
{
    cout << "The cube is: " << a * a * a << endl;
}

int main()
{
    cout << "The powered value: " << pow(3, 4) << endl;
    multi(2, 4);
    cube(3);
}