#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_Base;
    void Display(void)
    {
        cout << "Displaying Base class variable Var_Base :" << var_Base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_Derived;
    void Display(void)
    {
        cout << "Displaying Base class variable Var_Base :" << var_Base << endl;
        cout << "Displaying Base class variable Var_Derived :" << var_Derived << endl;
    }
};

int main()
{
    BaseClass *ptr_BaseClass;
    BaseClass obj_Base;

    DerivedClass obj_Derived;

    // Twist
    ptr_BaseClass = &obj_Derived;
    ptr_BaseClass->var_Base =  8;
    ptr_BaseClass->Display(); // but it will execute base_class Display not dervied class
    // because of Late Binding

    cout << "\n\n";
    
    // ptr_BaseClass->var_Derived = 34;  //  will throw an error
    // class "BaseClass" has no member "var_Derived"

    DerivedClass *ptr_DerivedClass = &obj_Derived;
    ptr_DerivedClass->var_Derived = 55;
    ptr_DerivedClass->Display();
    return 0;
}