#include <iostream>
using namespace std;

    // wap of to swap the two values using templates.


class Swap
{

public:
    template <typename T>
    T swap(T y, T z)
    {
        cout << "Before swapping :" << y << "\t" << z << endl;
        y = y + z; 
        z = y - z; 
        y = y - z; 
        cout << "After swapping :" << y << "\t" << z << endl;
    }
};

int main()
{
    Swap y1;
    y1.swap<int>(2, 10);
}