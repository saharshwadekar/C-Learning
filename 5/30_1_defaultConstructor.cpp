#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void); // Declaration
    void printnumber()
    {
        cout << "your complex number is " << a << " + " << b << "i" << endl;
    }
}; 

Complex::Complex(void){     // Default Constructor as it accepts no parameter
    a = 0;
    b = 0;
}

int main()
{
    Complex a;
    a.printnumber();
    return 0;
}