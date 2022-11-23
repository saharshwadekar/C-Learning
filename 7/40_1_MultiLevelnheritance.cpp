#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_rollnumber(int);
    void get_rollnumber(void);
};

void Student ::set_rollnumber(int r)
{
    roll_number = r;
}

void Student ::get_rollnumber()
{
    cout << "the roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float Maths;
    float Physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    Maths = m1;
    Physics = m2;
}

void Exam ::get_marks()
{
    cout << "The Marks Obtained in physics is :" << Physics << endl
         << "The Marks Obtained in Maths is :" << Maths << endl;
}

class Result : public Exam
{
    float percentage;
public:
    void Display_result();

};

void Result :: Display_result(){
    get_rollnumber();
    get_marks();
    percentage = (Maths + Physics)/2;
    cout << "your percentage is :"<< percentage<< "%" << endl;
}

int main()
{
    Result harry;
    harry.set_rollnumber(420);
    harry.set_marks(97.00,98.00);
    harry.Display_result();
    return 0;
}

/*
Notes : 
    If we are Inheriting B from A & C from B  =  { A--->B--->C }
    1. A is the base class for B and B is the base class for C
    2. A-->B-->C    Inheritance path
*/