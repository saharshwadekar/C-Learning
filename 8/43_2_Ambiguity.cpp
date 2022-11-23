#include <iostream>
using namespace std;

class B
{
public:
    void say(){
        cout << "Hello World!!" << endl;
    }
};

class D : public B
{
    int a;
public:
// Ambiguity = over write over a Base 'B' class
    void say(){     
        cout << "Hey its new say`" << endl;
    }
};

int main()
{
    D d1;
    d1.say();   
    return 0;
}