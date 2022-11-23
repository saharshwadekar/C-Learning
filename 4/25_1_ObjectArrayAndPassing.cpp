#include <iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setId(){
            cout<< "Enter The id of Employee";
            cin >> id;
        }
        void getId(){
            cout << "Id of this employee is :" << id << endl << endl;
        }
};

int main()
{
    // Employee h1;
    // h1.setId();
    // h1.getId();

    Employee fb[4];

    for(int i=0;i<4;i++){
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}