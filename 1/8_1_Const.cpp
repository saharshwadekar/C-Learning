#include <iostream>
using namespace std;

int main()
{
    int a = 45;
    char c = 'A';
    cout << "The value of a is " << a << endl;
    cout << "The value of c is " << c << endl;
    a = 12;
    c = '4';
    cout << "The value of a is " << a << endl;
    cout << "The value of c is " << c << endl;
    //To don't change in any cases we have to make it an constants
    
    const int r = 3;
    cout << "The valueof r is " << r << endl;
    // r = 545; // <-- it shows an error to do not change iit
    cout << "The valueof r is " << r << endl;
    return 0;
}