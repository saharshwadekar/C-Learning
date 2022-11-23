#include <iostream>
using namespace std;

int prod(int a, int b)
{
    cout << "using arguement 2 " << endl;
    return a * b;
}

int prod(int a, int b, int c)
{
    cout << "using arguement 3 " << endl;
    return a * b * c;
}
// for cylinder
int volume(double r , int h){
    return (3.14*r*r*h);
}

// for cube
int volume(int  a){
    return a*a*a;
} 

//for rectangular box
int volume(int l, int b, int h){
    return l*b*h;
}

int main()
{
    cout << "product of 2 * 3 is " << prod(2, 3) << endl;
    cout << "product of 2 * 3 * 4 is " << prod(2, 3, 4) << endl;
    cout << "The volume of cylinder of r = 3 & h = 6 is "<< volume(3,6) << endl;
    cout << "The volume of cube of a = 4 is "<< volume(4) << endl;
    cout << "The volume of rectangular box of l=8,b=7,h=6 is "<< volume(8,7,6) << endl;
    return 0;
}