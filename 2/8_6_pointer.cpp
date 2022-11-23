#include <iostream>
using namespace std;
int main()
{
    // What is pointer
    // pointer is an variable that can store the address of another variable
    int *ptr, **pptr, a = 20;
    ptr =  &a;
    pptr = &ptr;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    cout << &a << endl;
    cout << a << endl;

    cout << pptr << endl;
    cout << *pptr << endl;
    cout << &pptr << endl;
    cout << **pptr << endl;

    return 0;
}

// & --> address of operator
// * --> content of operator