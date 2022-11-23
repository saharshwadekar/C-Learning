#include <iostream>
using namespace std;

/*
syntax for initialization list in constructor:
constructor (argument_list) : initialization_section
{
    assignment + other code;
}
Eg:-
class Test {
  int a, b;
public:
    Test(int i, int j): a(i) , b(j);
};


*/

class Test {
  int a, b;   // here the declareation of a is first and then b;
public:
    Test(int i, int j) : b(j) , a(i+b)
    {
        cout << "Constructor is executed" << endl
             << "The value of a:" << a << endl
             << "The value of b:" << b << endl;
    }
    /*
    Test(int i, int j) : a(i) , b(j)
    Test(int i, int j) : a(i) , b(i+j)
    Test(int i, int j) : a(i) , b(2*j)
    Test(int i, int j) : a(i) , b(a+j)


    Test(int i, int j) : b(j) , a(i+b) // It will not run properly through junk value because a is declared first in private 
    run only if b is declare first in private section
    ans:
            Constructor is executed
            The value of a:32767 // it is the junk value
            The value of b:2
    */
}; 


int main()
{
    Test t(1,2);
    return 0;
}