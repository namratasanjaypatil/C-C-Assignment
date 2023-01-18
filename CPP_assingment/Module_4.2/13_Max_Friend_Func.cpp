#include <iostream>
using namespace std;

    // wap to find the max number from given tow numbers using friend function.

class X
{
private:
    int y, z;

public:
    X()
    {
        cout << "Enter First no. :";
        cin >> y;
        cout << "Enter Second no. :";
        cin >> z;

        cout << "First no. :" << y << "\tSecond no. :" << z << endl;
    }
    friend void max(X obj);
};

void max(X obj)
{
    int max;
    max = obj.y > obj.z ? obj.y : obj.z;
    cout << "max:" << max << endl;
}
int main()
{
    X yy;
    max(yy);
}