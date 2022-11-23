#include <iostream>

using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you" << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho!" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;
public:
    void greet(){
        Base1::greet();         // Only Base1 greet get call
    }
};
int main()
{
    Base1 base1obj;
    Base2 base2obj;

    base1obj.greet();
    base2obj.greet();

/*
    greet is repeated in both the class and derived get confused while excuting 
    so to resolve it Ambiguity inheritance is used
    here Eg: Base1::greet(); <<-- taging that which one have to use
*/
    Derived d;
    d.greet();
    return 0;
}