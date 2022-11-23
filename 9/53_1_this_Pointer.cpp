#include <iostream>
using namespace std;

class A
{
    int a;
public:
    A & setData(int a)
    {
        // a = a; // This will give an Junk value
        this->a = a;
        return *this;
    }

    void setData_1(int a)
    {
        this->a = a;
    }
    
    void getData(void)
    {
        cout << "The value of a is "<< a << endl;
    }
};

int main()
{
    // 'this' is a keyword which is a pointer which points to the object which invokes the member function
    A a;
    
    a.setData(4).getData();

    a.setData_1(5);
    a.getData();

    return 0;
}