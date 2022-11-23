#include <iostream>
using namespace std;

class Base
{
protected:  // like a private but it can inherit
    int a;
private:
    int b;
public:

    
};
/*
For a protected member 
memberS           public derivation     private derivation    protected derivation
1.private    :    NOT INHERITED         NOT INHERITED         NOT INHERITED
2.protected  :    PROTECTED             PRIVATE               PROTECTED
3.public     :    PUBLIC                PRIVATE               PROTECTED
*/
class Derived : protected Base
{
    
};



int main()
{
    Base b;
    Derived d;
    // cout << b.a; // 'a' is a protected member of 'Base as well as Derived class'
    // cout << d.a;
    return 0;
}