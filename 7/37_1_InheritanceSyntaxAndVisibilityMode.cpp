#include <iostream>
using namespace std;

// Base class
class Employee
{

public:
    int id;
    float salary;
    Employee() {}
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
};

// Derived class
/*
class {{drived_class_name}} : {{visisbility_mode}} {{base_class_name}}
{
    class member/methods/etc...
};

{{visisbility_mode}} :-It could be a private(Default) / public
1. private visisbility_mode : Public member of the base class became private member of the derived class
2. public visisbility_mode : Public member of the base class became public member of the derived class

# private members of the base class are never be inherited
*/

// Creating a programmer class derived from employee base class
class programmer : /*Visiblilty mode */ Employee
{
public:
    int languageCode ;
    programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getdata(){
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl; // member "Employee::id" (declared at line 9) is inaccessible 
    // to erase error add public infront of the Employee in visibility mode
    skillF.getdata();
    return 0;
}