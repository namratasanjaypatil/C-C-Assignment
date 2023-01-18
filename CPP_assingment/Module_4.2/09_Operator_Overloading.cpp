#include <iostream>
using namespace std;

    // wap of Two 1D Matrix Addition using Operator Overloading.

class Standard_8th
{
    int Science, Chemistry;

public:
    Standard_8th() {}
    Standard_8th(int Science, int Chemistry)
    {
        this->Science = Science;
        this->Chemistry = Chemistry;
    }

    void display()
    {
        cout << Science << " " << Chemistry << endl;
    }

    Standard_8th operator+(Standard_8th stud)
    {
        Standard_8th temp;
        temp.Science = Science + stud.Science;
        temp.Chemistry = Chemistry + stud.Chemistry;

        return temp;
    }
};
int main()
{
    Standard_8th stud1(75, 89), stud2(65, 71);
    Standard_8th stud3 = stud1 + stud2;
    stud3.display();
}