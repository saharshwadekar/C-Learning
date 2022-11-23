#include <iostream>
using namespace std;

int c = 65; // --> Global variable

int main()
{
    // int a, b, c;
    // cout << "Enter the value of a :";
    // cin >> a;
    // cout << "Enter the value of b :";
    // cin >> b;
    // c = a + b; // --> local variable
    // cout << "The sum of a + b is " << c << endl;
    // cout << "The Global c is " << ::c << endl;

    float d = 34.43453f; // f is used to denote it as a float
    long double e = 34.43453l;
    cout << "The value of d is " << d << endl;
    cout << "The value of e is " << e << endl;
    cout << "The size of d is " << sizeof(d) << endl;
    cout << "The size of e is " << sizeof(e) << endl;
    return 0;
}

// :: scope resolution operator to express global variable