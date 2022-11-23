/***************OBJECT ORIENTED PROGRAMMING******************/
#include <iostream>
using namespace std;


class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // Decaration
        void getData(){
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
            cout << "The value of c is " << c << endl;
            cout << "The value of d is " << d << endl;
            cout << "The value of e is " << e << endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}



int main()
{
    Employee harry;     // <-- object
    harry.a = 234; // not possible due to private // 21_1_OOPs.cpp:9:13: note: declared private here int a, b, c;
                                                                                                    //   ^
    harry.setData(1,2,4);
    harry.d= 34;
    harry.e = 89;
    harry.getData();
    return 0;
}