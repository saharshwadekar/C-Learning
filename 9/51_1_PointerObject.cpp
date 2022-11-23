#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is :" << real << endl;
        cout << "The imaginary part is :" << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1; // or
    Complex *ptr = new Complex;
    // c1.setData(1, 45);
    // c1.getData();

    // (*ptr).setData(1, 45);  // braket is necessary
    // or
    ptr->setData(1, 45);

    // (*ptr).getData();
    // or
    ptr->getData();


    // Array of object
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1, 3);
    ptr1->getData();

    return 0;
}