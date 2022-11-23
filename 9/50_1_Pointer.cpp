#include <iostream>
using namespace std;

int main()
{
    // Basic Exmaple
    int a = 4;
    int *ptr = &a;
    cout << "a :" << a << endl;
    cout << "ptr :" << ptr << endl;
    cout << "&a :" << &a << endl;
    cout << "*ptr :" << *ptr << endl;
    cout << "&ptr :" << &ptr << endl;

    // new keyword & Operator
    int *p = new int(48);
    // float *p = new float(48.674);
    cout << "*p :" << *p << endl;


    int *arr = new int[3];
    arr[0] = 10;
    // arr[1] = 11;
    *(arr + 1) = 11;
    arr[2] = 12;
    delete[] arr;
    cout << "The value of arr[0] = " << arr[0] << endl;
    cout << "The value of arr[1] = " << arr[1] << endl;
    cout << "The value of arr[2] = " << arr[2] << endl;

    // for(int i = 0; arr[i]!= '\0';i++ )
    // {
    //     cout << "The value of arr[" << i <<"] =" << arr[i] << endl;
    // }

    // delete Operator & keyword

    return 0;
}