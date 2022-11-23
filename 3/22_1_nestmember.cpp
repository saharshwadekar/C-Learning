// OOPs - classes and object
// c++ --> c with classes by stroustroup
// class --> extentions of structure ( in C )
// struture had limitations
//       --> members are public
//       --> no methods
// classes --> structures + more
// classes can have methods and properties
// classes --> can make few members as private as well as pubilc
// structure in c++ are typedefed
// you can declare object along with class declration Eg.,
//          class Employee{
//              // class defination
//          }harry , rohan , lovish;

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s; // by default private

public:
    void read(void);
    void chk_bin();
    void oncecompliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number ";
    cin >> s;
}

void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::oncecompliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
}

void binary ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    // Nesting of member function
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.oncecompliment();
    b.display();
    return 0;
}