#include <iostream>
using namespace std;

// call by value
// call by value method of passing a copy of the actual parameter into the formal parameter of a funtion
// It does not affect the actual parameter in main funtion 
void swap(int, int);
int main()
{
    int a = 4, b =5;
    cout << "In main, before The value of a is " << a << " and The value of b is " << b << endl;
    swap(a,b);
    cout << "In main, after The value of a is " << a << " and The value of b is " << b << endl;
    return 0;
}
void swap(int a, int b)
{
    cout << "In funtion, before The value of a is " << a << " and The value of b is " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "In funtion ,after The value of a is " << a << " and The value of b is " << b << endl;
}  