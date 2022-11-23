#include <iostream>  // SH

// There are two types of header file
/*
1. System defined header file(SH) ; It comes with compiler
2. User defined header file(UH) ; It is written by programmer
*/
//#include "This.h" // UH it should be present in live/current directory

using namespace std;

int main()
{
    int a = 4 , b=5;
    cout << "\nhello i am operator basics" << endl ;
// operators in c++
// Arithematic operators
    cout << "\nThe value of a - b is " << a - b;
    cout << "\nThe value of a + b is " << a + b;
    cout << "\nThe value of a * b is " << a * b;
    cout << "\nThe value of a / b is " << a / b;
    cout << "\nThe value of a % b is " << a % b;
    cout << "\nThe value of a++ is " << a++;
    cout << "\nThe value of a-- is " << a--;
    cout << "\nThe value of ++a is " << ++a;
    cout << "\nThe value of --a is " << --a << endl;

//Assignment operator
 /* 
        =
*/

// comparision operator


    cout << "\nThe value of a > b is " << (a > b);
    cout << "\nThe value of a < b is " << (a < b);
    cout << "\nThe value of a == b is " << (a == b);
    cout << "\nThe value of a >= b is " << (a >= b);
    cout << "\nThe value of a <= b is " << (a <= b);
    cout << "\nThe value of a != b is " << (a != b) << endl;

    return 0;
}