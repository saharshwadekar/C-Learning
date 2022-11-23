#include <iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;
public:
    Simple(int a, int b = 9 ,int c = 5){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printdata();
};

void Simple :: printdata(){
    cout << "The value of Data1 :"<< data1 << endl << "Data2 :" << data2 << endl << "Data3 :" << data3<< endl;
}
int main()
{
    Simple s1(1,6,7);
    s1.printdata();

    Simple s2(3);   // Dafault value of Data2 has been set 
    s2.printdata();

    return 0;
}