#include <iostream>
using namespace std;

class complex; // declaration is necessary

class Calculator
{

public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};

class complex
{
    int a;
    int b;
    friend int Calculator ::sumRealComplex(complex, complex);
    friend int Calculator ::sumCompComplex(complex, complex);

    // for to make whole class to be a friend
    // friend class calculator;      // <---|

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "Complex number is " << a << "+" << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2, sum;
    c1.setnumber(2, 3);
    c1.printnumber();
    c2.setnumber(4, 5);
    c2.printnumber();

    Calculator calc;
    int res = calc.sumRealComplex(c1, c2);
    cout << "The sum of real part of c1 and c2 is " << res << endl;
    res = calc.sumCompComplex(c1, c2);
    cout << "The sum of complex part of c1 and c2 is " << res << endl;
    return 0;
}