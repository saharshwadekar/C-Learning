#include <iostream>
using namespace std;

//Same as previous

class BaseClass
{
public:
    int var_Base;
    virtual void Display(void) // by adding virtual
    {
        cout << "Displaying Base class variable Var_Base :" << var_Base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_Derived = 66;
    void Display(void)
    {
        cout << "Displaying Base class variable Var_Base :" << var_Base << endl;
        cout << "Displaying Derived class variable Var_Derived :" << var_Derived << endl;
    }
};

int main()
{
    BaseClass *ptr_BaseClass;
    DerivedClass obj_DerivedClass;

    ptr_BaseClass = &obj_DerivedClass;

    ptr_BaseClass->var_Base = 90;
    ptr_BaseClass->Display();
    return 0;
}