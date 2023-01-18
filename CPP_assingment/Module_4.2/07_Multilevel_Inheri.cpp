#include <iostream>
using namespace std;

    /* Assume that the test results of a batch of students are stored in three different classes. 
    Class Students are storing the roll number. Class Test stores the marks obtained in 
    two subjects and class result contains the total marks obtained in the test. 
    The class result can inherit the details of the marks obtained in the test and roll number of students. 
    (Multilevel Inheritance) */

class Students
{
    int rollNum;

public:
    void setDataA(int c)
    {
        rollNum = c;
    }
    void getDataA()
    {
        cout << "Roll number: " << rollNum << endl;
    }
};

class Test : public Students
{
public:
    int Science, Chemistry;
    void setDataB(int a, int b)
    {
        Science = a;
        Chemistry = b;
    }

    void getDataB()
    {
        cout << "Science: " << Science << endl;

        cout << "Chemistry: " << Chemistry << endl;
    }
};
class Result : public Test
{
    int totalMarks;

public:
    void setDataC()
    {
        totalMarks = Science + Chemistry;
    }

    void getDataC()
    {
        cout << "Total marks: " << totalMarks << endl;
    }
};

int main()
{
    Result Pooja;
    Pooja.setDataA(20);
    Pooja.getDataA();
    Pooja.setDataB(81, 81);
    Pooja.getDataB();
    Pooja.setDataC();
    Pooja.getDataC();
}
