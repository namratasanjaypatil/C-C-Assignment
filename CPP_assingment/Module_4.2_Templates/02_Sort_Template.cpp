#include <iostream>
using namespace std;

    // wap of to sort the array using templates. 


class Sort
{

public:
    template <typename T>
    T sort()
    {
        T b[6], i, j, temp;
        cout << "Enter any random five numbers:";
        for (i = 0; i < 6; i++)
        {
            cin >> b[i];
        }
        cout << "Entered numbers:" << b[0] << "," << b[1] << "," << b[2] << "," << b[3] << "," << b[4] << "," << b[5] << endl;
        cout << "The numbers sorted are:";

        for (i = 0; i < 6; i++)
        {
            for (j = i + 1; j < 6; j++)

                if (b[j] < b[i])
                {
                    temp = b[i];1
                    b[i] = b[j];
                    b[j] = temp;
                }
            {
                cout << " " << b[i];
            }
        }
    }
};

int main()
{
    Sort a1;
    a1.sort<int>();
}