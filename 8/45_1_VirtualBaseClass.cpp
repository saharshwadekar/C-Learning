/*

                      Student
                         |
                 ----------------
                 |               |
                Test            Sports
                 |               |
                 ----------------
                         |
                        Result

*/
#include <iostream>
using namespace std;

class Student
{
protected:
        int roll_no;

public:
        void set_number(int a)
        {
                roll_no = a;
        }
        void print_number(void)
        {
                cout << "Your roll number is " << roll_no << endl;
        }
};

class Test : virtual public Student
{
protected:
        float Maths, Physics;

public:
        void set_Marks(float, float);
        void print_Marks(void);
};

void Test ::set_Marks(float a, float b)
{
        Maths = a;
        Physics = b;
}
void Test ::print_Marks(void)
{
        cout << "You have Obtained" << endl
             << "Maths :" << Maths << endl
             << "Physics :" << Physics << endl;
}

class Sports : public virtual Student
{
protected:
        float score;

public:
        void set_score(float sc)
        {
                score = sc;
        }
        void print_score(void)
        {
                cout << "Your P.T score is :" << score << endl;
        }
};

// result
class Result : public Test, public Sports
{
private:
        float Total;

public:
        void Display(void)
        {
                Total = Physics + Maths + score;

                print_number();
                print_Marks();
                print_score();

                cout << "your total score is :" << Total << endl;
        }
};

int main()
{
        Result Saharsh;
        Saharsh.set_number(50);
        Saharsh.set_Marks(94.0, 100.0);
        Saharsh.set_score(7);
        Saharsh.Display();
        return 0;
}