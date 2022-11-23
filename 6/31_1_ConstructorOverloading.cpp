#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(){
        a = 0;
        b = 0;
    }
    Complex(int x, int y) // -> 1
    {
        a = x;
        b = y;
    }
    Complex(int x) // -> 2
    {
        a = x;
        b = 0;
    }

    void printnumber()
    {
        cout << "your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(4,5);  // ->1
    c1.printnumber();
    Complex c2(7); // ->2
    c2.printnumber();
    Complex c3;
    c3.printnumber();
    return 0;
}

/*
we can make more than one constructor in a programme called constructor overloading
*/