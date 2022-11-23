#include <iostream>
using namespace std;
/*
Destructor
never takes any value
nor return
*/
int calc = 0;
class num
{
public:
    num()
    {
        calc++;
        cout << "This is the time when Constructor is called for object number :" << calc << endl;
    }
    ~num()
    {
        cout << "This is the time when Destructor is called for object number :" << calc << endl;
        calc--;
    }
};

int main()
{
    cout << "Inside main function" << endl;
    cout << "creating first object n1" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two new object" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}