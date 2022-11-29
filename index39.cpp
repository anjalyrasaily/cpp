#include <iostream>
using namespace std;
// Multilevel inheritance
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};
void Student::set_roll_number(int r)
{

    roll_number = r;
}
void Student::get_roll_number()
{

    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};
void Exam::set_marks(float m1, float m2)
{

    maths = m1;
    physics = m2;
}
void Exam::get_marks()
{
    cout << "The marks obtained in physics is number are  " << maths << endl;
    cout << "The marks obtained in physics is number are  " << physics << endl;
}
class result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is " << (maths + physics)<<endl;
    }
};

int main()
{
    result jack;
    jack.set_roll_number(230);
    jack.set_marks(94.8,90.0);
jack.display_result();
    return 0;
}