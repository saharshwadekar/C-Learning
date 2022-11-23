#include <iostream>
using namespace std;

// Multiple Derived class
/*
class {{drived_class_name}} : {{visisbility_mode}} {{base_class_name1}}, {{visisbility_mode}} {{base_class_name2}}
{
    class member/methods/etc...
};
*/
class Base1
{
protected:
    int point1;

public:
    void set_point1(int a)
    {
        point1 = a;
    }
};
class Base2
{
protected:
    int point2;

public:
    void set_point2(int a)
    {
        point2 = a;
    }
};
class Base3
{
protected:
    int point3;

public:
    void set_point3(int a)
    {
        point3 = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The Value of base1 :" << point1 << endl
             << "The Value of base2 :" << point2 << endl
             << "The Sum of base1 + base2 :" << point1 + point2 << endl
             << "The Value of base3 :" << point3 << endl
             << "The Sum of base1 + base2 + base3 :" << point1 + point2 + point3 << endl;
    }
};

int main()
{
    Derived dl;
    dl.set_point1(25);
    dl.set_point2(5);
    dl.set_point3(55);
    dl.show();
    return 0;
}