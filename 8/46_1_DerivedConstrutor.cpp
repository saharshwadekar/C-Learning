#include <iostream>
using namespace std;

/*
case1:
class B : public A{
    // order of execution of constructor -> first A and second B
};

case2:
class A : public B, public C{
    // order of execution of constructor -> first B and second C and then last A
};
case3:
class A : public C, public B{
    // order of execution of constructor -> first C and second B and then last A
};

case 4
class A: public B, public virtual C{
    // order of execution of constructor -> first C and second B and then last A
};
*/

class Base1
{
    int data;

public:
    Base1(int i)
    {
        data = i;
        cout << "base1 class constructor is called" << endl;
    }
    void print_data(void)
    {
        cout << "The value of data1 is " << data << endl;
    }
};

class Base2
{
    int data;

public:
    Base2(int i)
    {
        data = i;
        cout << "base2 class constructor is called" << endl;
    }
    void print_data(void)
    {
        cout << "The value of data2 is " << data << endl;
    }
};

class Derived : public Base2, public Base1
{
    int der1, der2;

public:
    // Derived Constructor
    Derived(int a, int b, int c, int d) : Base2(a), Base1(b)
    {
        der1 = c;
        der2 = d;
        cout << "Derived class is exicuted sucessfully" << endl;
    }
    void print_data(void)
    {
        Base1 :: print_data();
        Base2 :: print_data();
        cout << "The Value of der_1 :" << der1 << endl
             << "der_2 :" << der2 << endl;
    }
};

int main()
{
    Derived d1(1, 2, 3, 4);
    d1.print_data();
    return 0;
}