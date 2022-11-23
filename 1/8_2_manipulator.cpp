#include <iostream>
#include <iomanip>

using namespace std;

//***************Manipulators***************//
int main()
{
    /* Eg:-  1) Endl
             2) setw
    */

    int a = 3 , b = 38, c = 383;
    cout << "The value of a is " << setw(4) << a << endl;
    cout << "The value of b is " << setw(4) << b << endl;
    cout << "The value of c is " << setw(4) << c << endl << endl;
    cout << "The value of a without setw is " << a << endl;
    cout << "The value of b without setw is " << b << endl;
    cout << "The value of c without setw is " << c << endl;

    return 0;
}