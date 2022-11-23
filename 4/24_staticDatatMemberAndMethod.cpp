#include <iostream>
using namespace std;

class Employee{

    int Id;
    static int count;       // by default value is zero 0;       // by using static variable is subjected to class 

public:
    void setData(void){
        cout << "Enter your Id :";
        cin >> Id;
        count++;
    }
    void getData(){
        cout<< "The "<< count << "_Employee Id is :";
        cout << Id << endl ;
    }
    static void getCount(){
        cout << "The value of count is :"<< count << endl;
    } 
};



int Employee :: count = 0;

int main()
{
    Employee harry;

    // harry.Id=1
    // harry.count = 1;         // Cannot do this due to Id and Count are private   
    
    harry.setData();
    harry.getData();
    Employee :: getCount();
    
    harry.setData();
    harry.getData();
    Employee :: getCount();

    
    harry.setData();
    harry.getData();
    Employee :: getCount();
    return 0;
}