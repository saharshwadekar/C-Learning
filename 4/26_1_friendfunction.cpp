#include <iostream>
using namespace std;

class complex{
    int a;
    int b;
public:
    void setnumber(int n1,int n2){
        a = n1;
        b = n2;
    }
    void printnumber(){
        cout << "your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }

    // below line is permission to allow private data using foreign funtion 
    friend complex sumcomplex(complex o1,complex o2);   //  <---- Friend function declaration
};

complex sumcomplex(complex o1, complex o2){
    complex o3;
    o3.setnumber((o1.a + o2.a),( o1.b + o2.b ));
    return o3;
}

int main()
{
    complex c1,c2,sum;
    c1.setnumber(1,4);
    c1.printnumber();
    c2.setnumber(5,8);
    c2.printnumber();
    
    sum = sumcomplex(c1,c2);
    sum.printnumber();
    return 0;
}

// properties of friend function  
/*
1. Not in the scope of class. .
2. It cannot be called by using object of class eg:- c1.sumcomplex(); == INVALID.
3. Can be INVOKED without the help of any object.
4. Usually contain the object as argument.
5. can be Declared inside public as well as private section of the class.
6. It cannot access the member directly by their names and need object_name.member_name to acces any member .
*/