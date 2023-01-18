#include <iostream>
using namespace std;

    // wap to swap the two numbers using friend function without using third variable.



class Fun
{
protected:
    int y, z;

public:
    Fun()
    {
        cout << "Enter first no. :";
        cin >> y;
        cout << "Enter second no. :";
        cin >> z;

        cout << "Before swapping :" << y << "\t" << z << endl;
    }
    friend void swap(Fun obj);
};
void swap(Fun obj)
{
    obj.y = obj.y * obj.z; 
    obj.z = obj.y / obj.z; 
    obj.y = obj.y / obj.z;  
    cout << "After swapping :" << obj.y << "\t" << obj.z << endl;
}

int main()
{
    Fun y1;
    swap(y1);
}