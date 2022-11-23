#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int , int); // Declaration
    void printnumber()
    {
        cout << "your complex number is " << a << " + " << b << "i" << endl;
    }
}; 

Complex::Complex(int x, int y){   // parameterized Constructor 
    a = x;
    b = y;
}

int main()
{
    //#Method - 1
    // Implicit call
    Complex a(4,6);

    //#Method - 2
    //Explicit call
    Complex b = Complex(5,7);

    a.printnumber(); 
    b.printnumber();
    return 0;
}