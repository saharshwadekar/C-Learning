#include <iostream>
using namespace std;

int calcpro(int a,int b)
{
    static int c = 0; // this call only for once (THis execute only once)
    c++; // c = c + 1 // Next time it retains its value
    return a*b+c;
}
int main()
{
    int a = 5 , b = 3;
    cout << "The product of  a and b is " << calcpro(a,b) << endl;
    cout << "The product of  a and b is " << calcpro(a,b) << endl;
    cout << "The product of  a and b is " << calcpro(a,b) << endl;
    cout << "The product of  a and b is " << calcpro(a,b) << endl;
    cout << "The product of  a and b is " << calcpro(a,b) << endl;
    cout << "The product of  a and b is " << calcpro(a,b) << endl;
    cout << "The product of  a and b is " << calcpro(a,b) << endl;
    cout << "The product of  a and b is " << calcpro(a,b) << endl;
    cout << "The product of  a and b is " << calcpro(a,b) << endl;
    cout << "The product of  a and b is " << calcpro(a,b) << endl;
    cout << "The product of  a and b is " << calcpro(a,b) << endl;
    cout << "The product of  a and b is " << calcpro(a,b) << endl;
    return 0;
}