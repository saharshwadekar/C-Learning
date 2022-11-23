#include <iostream>
using namespace std;
class Y;
class X{
    friend void add(X,Y);
    int data;
    public:
        void setdata(int value){
            data = value;
        }
};

class Y{
    friend void add(X,Y);
    int data;
    public:
        void setdata(int value){
            data = value;
        }
};

void add(X o1, Y o2){
    cout <<"The sum of data of X and Y is :"<< (o1.data + o2.data) << endl;
}

int main()
{
    X a;
    a.setdata(6);
    Y b;
    b.setdata(8);

    add(a,b);
    return 0;
}