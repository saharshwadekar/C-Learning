#include <iostream>
using namespace std;

// call by reference
// call by reference method of passing an address of the actual parameter into the formal parameter of a funtion
// It does affect the actual parameter in main funtion

// void swap(int *a, int *b);
void swap(int *a, int *b)
{
    cout << "In funtion, before The value of a is " << *a << " and The value of b is " << *b << endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "In funtion ,after The value of a is " << *a << " and The value of b is " << *b << endl;
}

void swapref(int &a, int &b)
{
    cout << "In funtion, before The value of a is " << a << " and The value of b is " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "In funtion ,after The value of a is " << a << " and The value of b is " << b << endl;
}

int main()
{
    int a = 4, b = 5;
    cout << "In main, before The value of a is " << a << " and The value of b is " << b << endl;
    //swap(&a, &b); // using pointer
    swapref(a,b); // using reference
    cout << "In main, after The value of a is " << a << " and The value of b is " << b << endl;
    return 0;
}
