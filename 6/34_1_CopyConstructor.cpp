#include <iostream>
using namespace std;

class Number{
    int a;
public:
    Number(){  // <-- Default Constructor is necessary  if another Constructor is exisit
        a = 0;
    }

    Number(Number &obj){    // < --Copy Constructor
        cout << "Copy Constructor\n";
        a = obj.a;
    }
      
    // When NO Copy Constructor is found , complier supplies its own copy constructor shown below is default copy constructor
     
    Number(int num){
        a = num;
    }
    void display(){
        cout << "the number for this Object is "<< a << endl;
    }
};

int main()
{
    Number x(76),y,z(34), z2;
    x.display();
    y.display();
    z.display();

    // z1 Should exactly resemble z or x or y
    Number z1(x); // here Copy Constructor is invoked
    z1.display();
//or
    z2 = z; // here Copy Constructor is not invoked because it already assign the value of z2
    z2.display(); // Object is already exisit

// or
    Number z3 = z; // Here Copy Constructor is invoked // Single line define object
    z3.display();
    return 0;
}