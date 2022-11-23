#include <iostream>
using namespace std;
/***********************************************************/
class Base
{
    int data1; // IT is not inheritable by default private
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base ::setData(void)
{
    data1 = 20;
    data2 = 30;
}
int Base ::getData1()
{
    return data1;
}
int Base ::getData2()
{
    return data2;
}
/***********************************************************/
class Derived : private Base // change
{
    int data3;

public:
    void process();
    void display();
};
void Derived ::process(void)
{
    setData();                  // change
    data3 = data2 * getData1(); // data1 is not an public function
}
void Derived ::display(void)
{
    cout << "The value of Data 1 is " << getData1() << endl; // data1 is not an public function
    cout << "The value of Data 2 is " << data2 << endl;
    cout << "The value of Data 3 is " << data3 << endl;
}
/***********************************************************/
int main()
{
    Derived der;
    // der.setData(); // change
    der.process();
    der.display();
    return 0;
}