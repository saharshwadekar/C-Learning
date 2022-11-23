#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a constructor
    //  Constructor is the special member function with same name as of the class.
    //  automatically invoked when ever object is created
    //  It is used to initialize the object of its class
    Complex(void); // Constructor declaration

    void printnumber()
    {
        cout << "your complex number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void)  // --> This is default Constructor NO return type
{
    a = 0;
    b = 0;
    cout << "Helllo"<<endl;
}

int main()
{
    Complex c1, c2, c3;
    
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    return 0;
}
/*
Characteristics of constructor

1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. Do not have any return type "even not have void".
4. It can have default arguments.
5. We cannot refer to thei address.
*/