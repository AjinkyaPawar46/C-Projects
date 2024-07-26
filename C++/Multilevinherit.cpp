#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void setrollno(int r)
    {
        roll_no = r;
    }
    void getrollno()
    {
        cout << "The roll number of the student is : " << roll_no << endl;
    }
};
class Exam : public Student
{
protected:
    int maths, physics;

public:
    void setmarks(int m1, int m2)
    {
        maths = m1;
        physics = m2;
    }
    void getmarks()
    {
        cout << "The marks obtained in maths are : " << maths << endl;
        cout << "The marks obtained in physics are : " << physics << endl;
    }
};
class Result : public Exam
{
protected:
    float percentage;

public:
    void display()
    {
        getrollno();
        getmarks();
        cout << "The percentage of the student is " << float((maths + physics)) / 2 << "%" << endl;
    }
};
int main()
{
    Result Aji;
    Aji.setrollno(46);
    Aji.setmarks(98, 99);
    Aji.display();

    return 0;
}