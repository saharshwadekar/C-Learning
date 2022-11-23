#include <iostream>
#include <cmath>
using namespace std;

float Pi = 3.14;
class simpleCalculator
{
protected:
    int a, b;

public:
    void set_simpCalc_value(int, int);
};

void simpleCalculator ::set_simpCalc_value(int val1, int val2)
{
    a = val1;
    b = val2;
}

class scientificCalculator
{
protected:
    int x, y;

public:
    void set_sciCalc_value(int val1, int val2)
    {
        x = val1;
        y = val2;
    }
};

// Derived class
class hybridCalculator : public simpleCalculator, public scientificCalculator
{
public:
    void get_simpCalc_Value()
    {
        cout << a << " + " << b << " = " << a + b << endl;
        cout << a << " - " << b << " = " << a - b << endl;
        cout << a << " x " << b << " = " << a * b << endl;
        cout << a << " ÷ " << b << " = " << float(a) / float(b) << endl;
    }
    void get_sciCalc_Value()
    {
        cout << "log(" << x << ") = " << log(x) << endl;
        cout << "log(" << y << ") = " << log(y) << endl;
        cout << "e^" << x << " = " << (float)exp(x) << endl;
        cout << "e^" << y << " = " << (float)exp(y) << endl;
        cout << "sin(" << float (x) * 180 / Pi << ") = " << sin(x) << endl;
        cout << "sin(" << float (y) * 180 / Pi << ") = " << sin(y) << endl;
        cout << "Hypoteneous of (" << x << "," << y << ") = " << hypot(x, y) << endl;
    }
};

int main()
{
    int p, q;
    cout << "For simple Calculator" << endl;
    cout << "a = ";
    cin >> p;
    cout << "b = ";
    cin >> q;
    hybridCalculator H1;
    H1.set_simpCalc_value(p, q);
    H1.get_simpCalc_Value();

    cout << "For scientific Calculator" << endl;
    cout << "a = ";
    cin >> p;
    cout << "b = ";
    cin >> q;
    hybridCalculator H2;
    H2.set_sciCalc_value(p, q);
    H2.get_sciCalc_Value();

    return 0;
}